## 第三章 数据和 C

### 文档说明：

该文档作为本章节重要知识点的学习记录，如需查看完整内容请翻阅 `《C Primer Plus（第六版）中文版》` 原书。

### C 语言基本数据类型：

- 整数类型的取值范围：
  - short, int (2^16, 16 bit)：`[-32768, 32767]`

  - int, long (2^32, 32 bit)：`[-2147483648, 2147483647]`

  - long long (2^64, 64 bit)：`[-9223372036854775808, 9223372036854775807]`

  - unsigned short, int (2^16, 16 bit)：`[0, 65535]`

  - unsigned int, long (2^32, 32 bit)：`[0, 4294967295]`

  - unsigned long long (2^64, 64 bit)：`[0, 18446744073709551616]`

- 🚀 使用多种整数类型的原因：

  由于不同计算机的自然字长不同，可存储使用的整数类型不尽相同，为了兼容不同的字长，在跨平台架构的计算机或硬件上运行 C 语言程序，因此引入多种整数类型。

- C 语言编译器识别整数类型的顺序：`int`、`unsigned int`、`long`、`unsigned long`、`long long`、`unsigned long long`

- 各类整数类型的打印方式（printf() 函数格式化输出）：

  - `int` 关键字与 short 或 long 一起使用时可省略，单独声明整数类型时不可省略。

  - 有符号类型（signed）：

    - `signed` 关键字默认省略，在任何有符号类型前面添加时，可强调使用有符号类型的意图。

    - short：

      - short 与 signed short int 或 short int 等效

      - `%hd`：十进制显示 short 类型整数

      - `%hx`：十六进制显示 short 类型整数

      - `%ho`：八进制显示 short 类型整数

    - int 或 long：

      - int 与 signed int 等效

      - long 与 signed long int 或 long int 等效

      - `%d`：十进制显示 int 或 long 类型整数（若系统中 int 与 long 的大小相同）

      - `%lx`：十六进制显示 long 类型整数

      - `%lo`：八进制显示 long 类型整数

      > 注意：有时需要编译器以 long 类型存储一个小数字，可在声明定义值的末尾加上 `l` 或 `L` 后缀，如 5L、0x10LL、6ull 等。

    - long long：

      - long long 与 signed long long int 或 long long int 等效

      - `%lld`：十进制显示 long long 类型整数

  - 无符号类型（unsigned）：

    - 使用 `%u` 转换

    - `h` 与 `l` 前缀都可以和 `u` 一起使用

    - `%lu`：unsigned long 类型整数

    - `%llu`：unsigned long long 类型整数
    
- char 类型：使用字符