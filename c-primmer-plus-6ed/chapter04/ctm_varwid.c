/* varwid.c - 使用变宽输出字段 */
#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 36;
    double weight = 242.5;

    printf("** Initial width address: %p\n", width);

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("\n** After first scanf() - width address: %p\n", width);
    printf("The number is :%*d\n", width, number);
    /* 使用 * 修饰符代替字符宽度，但依然需要指定变量定义宽度。此时的字符宽度
     * 可根据程序自行赋值而不由转换说明修饰符定义。*/
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("\n** After second scanf() - width address: %p\n", width);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}

