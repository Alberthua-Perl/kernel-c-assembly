#include <stdio.h>

/* 由于 C 语言不存在 ** 运算符实现幂运算，
 * 因此，手动实现幂运算过程 */
int power(int m, int n);    /* 函数原型 */
//int power(int, int);    /* 函数原型中可省略参数，只保留类型 */

int main(void)
{
    int i;

    for (i = 1; i <= 10; ++i) {
        printf("%1d %8d %8d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}

int power(int base, int q)  /* 函数声明：函数的形参可使用不同的命名 */
{
    int p, i;
    
    p = 1;
    for (i = 1; i <= q; ++i) {
        p = p * base;
    }

    return p;
}

