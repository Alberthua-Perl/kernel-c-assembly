/* printf_flag.c - printf() 函数标志 */
#include <stdio.h>
#define Pi 3.14159

int main(void) {
    int a = 20;
    float b = 4.2338;
    double c = 3.28E+20;
    char str[] = "hello world";
    // 字符串具有 11 个字符与末尾的空字符（共 12 个字符）
    // 可直接声明字符串（字符数组）

    printf("int a converted to oct: %#o\n", a);
    printf("int a converted to hex: %#x\n", a);
    printf("float b: %20.3f\n", b);
    printf("float b: %  19.2f\n", b);
    printf("double c: %21.1e\n", c);
    printf("string str: %23s\n", str);  // 字符串宽度占 23 个字符向右对齐
    printf("symbolic const Pi: %09.2f\n", Pi);  // 符号常量宽度占 9 个字符并用前导 0 补齐空格

    return 0;
}

