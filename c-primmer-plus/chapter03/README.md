## 第三章 数据和 C

### 文档说明：
该文档作为本章节重要知识点的学习记录，如需查看完整内容请翻阅 `<C Primer Plus>` 原书。

### C 语言基本数据类型：
- 各类整形变量的取值范围：
  - short, int (2^16, 16 bit)：`[-32768, 32767]`
  - int, long (2^32, 32 bit)：`[-2147483648, 2147483647]`
  - long long (2^64, 64 bit)：`[-9223372036854775808, 9223372036854775807]`
  - unsigned short, int (2^16, 16 bit)：`[0, 65535]`
  - unsigned int, long (2^32, 32 bit)：`[0, 4294967295]`
  - unsigned long long (2^64, 64 bit)：`[0, 18446744073709551616]`
- 🚀 使用多种整数类型的原因：
  由于不同计算机的自然字长不同，可存储使用的整数类型不尽相同，为了兼容不同的字长，在跨平台架构的计算机或硬件上运行 C 语言程序，因此引入多种整数类型。

- C 语言编译器识别整数类型的顺序：
  int, unsigned int, long, unsigned long, long long, unsigned long long

- 各类整型变量的打印方式（格式化输出）：
  - 有符号类型（signed）：
    - short：
      - `%hd`：十进制显示 short 类型整数
      - `%hx`：十六进制显示 short 类型整数
      - `%ho`：八进制显示 short 类型整数
    - int 或 long：
      - `%d`：十进制显示 int 或 long 类型整数（若系统中 int 与 long 的大小相同）
      - `%lx`：十六进制显示 long 类型整数
      - `%lo`：八进制显示 long 类型整数
    > 注意：有些情况下，需要编译器以 long 类型存储一个小数字，可在声明定义值的末尾加上 `l` 或 `L` 后缀。  
    - long long：
      - `%lld`：十进制显示 long long 类型整数
  - 无符号类型（unsigned）：使用 `%u` 转换
    - `%`