/* varwid.c - 使用变宽输出字段 */
#include <stdio.h>

int main(void) {
    unsigned const width, precision;
    /* const unsigned width, precision;
     * 问题：使用 const 关键字声明为何在此处编译未报错？
     */
    int number = 36;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("width address: %p\n", width);
    printf("The number is :%*d\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Now width address: %p\n", width);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}

