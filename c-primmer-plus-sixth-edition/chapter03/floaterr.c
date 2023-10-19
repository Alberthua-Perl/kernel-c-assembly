/* floaterr.c - 演示浮点值舍入错误 */
#include <stdio.h>

int main(void)
{
    float a, b;

    b = 2.0e20 + 1.0;
    /* b = 2.0e20 + 1.0 */
    a = b - 2.0e20;
    printf("### 测试默认为 double 类型的浮点数运算 ###\n");
    /* a = b - 2.0e20 */
    printf("%f\n", a);
    /* 注意：计算机缺少足够的小数位来完成正确的运算。float 类型的浮点值只能储存 6 或 7 位有效数字，
       上例中 2.0e20 + 1 的浮点值需储存第 21 位有效数字，因此计算结果肯定错误。*/

    b = 2.0e20f + 1.0f;  /* 使用 f 后缀的浮点值将作为 float 类型 */
    a = b - 2.0e20f;
    printf("### 测试使用 f 后缀的浮点数运算 ###\n");
    printf("%f\n", a);

    b = 2.0e4 + 1;
    a = b - 2.0e4;
    printf("### 测试有效位数以内 (6~7位) 的浮点数运算 ###\n");
    printf("%f\n", a);

    return 0;
}
