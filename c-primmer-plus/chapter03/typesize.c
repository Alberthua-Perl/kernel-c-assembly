/* typesize.c - 打印类型大小 */
#include <stdio.h>

int main(void) {
    /* sizeof 为 C 语言的内置运算符，以字节为单位返回给定数据类型的大小，
       即为该类型在当前系统上被支持的最大取值宽度。*/
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n", 
        sizeof(long long));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", 
        sizeof(double));
    printf("Type long doube has a size of %zd bytes.\n", 
        sizeof(long double));

    return 0;
}
