/* typesize.c - 打印类型大小 */
#include <stdio.h>

int main(void)
{
    // sizeof 为 C 语言的内置运算符，以字节为单位返回给定数据类型的大小，
    // 即为该类型在当前系统上被支持的最大取值宽度。
    printf("Size for type short:      %zd bytes\n", sizeof(short));
    printf("Size for type int:        %zd bytes\n", sizeof(int));
    printf("Size for type long:       %zd bytes\n", sizeof(long));
    printf("Size for type long long:  %zd bytes\n", sizeof(long long));
    printf("Size for type char:       %zd bytes\n", sizeof(char));
    printf("Size for type float:      %zd bytes\n", sizeof(float));
    printf("Size for type double:     %zd bytes\n", sizeof(double));
    printf("Size for type long doube: %zd bytes\n", 
        sizeof(long double));

    return 0;
}
