/* floatcnv.c - 浮点数类型不匹配的转换说明 */
#include <stdio.h>

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    //printf("size of n1: %d bytes\n", sizeof n1);
    //printf("size of n2: %d bytes\n", sizeof n2);
    //printf("size of n3 and n4: %d bytes and %d bytes\n", sizeof n3, sizeof n4);
    // 确认各类型在内存中占用的字节数

    printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
    //printf("%.1f %.1f %ld %ld\n", n1, n2, n3, n4);  匹配的转换说明
    unsigned short charcount = printf("%ld %ld\n", n3, n4);  // printf() 函数返回打印字符的数目 
    printf("*previous printable character count is %hu\n", charcount);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);

    return 0;
}

