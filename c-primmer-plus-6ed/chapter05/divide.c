/* divide.c - 整数除法与浮点数除法的区别 */
#include <stdio.h>

int main(void)
{
    printf("integer division:  5/4 is %d \n", 5/4);
    printf("integer division:  6/3 is %d \n", 6/3);
    printf("integer division:  7/4 is %d \n", 7/4);
    // 整数除法：只返回整数部分，小数部分都被丢弃，不进行四舍五入，即称为截尾 truncation。
    // 正整数使用截尾，而负整数在 C99 中要求使用趋零截尾，即 -3.8 应该截取为 -3。
    printf("floating division: 7./4. is %1.2f \n", 7./4.);
    printf("Mixed division:    7./4 is %1.2f \n", 7./4);
    // 浮点数除法或整数与浮点数混合除法：返回浮点数

    return 0;
}

