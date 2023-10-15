/* showf_pt.c - 以两种方式显示 float 类型的值 */
#include <stdio.h>

int main(void) {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32E-5;
    
    float somef = 4.0f * 2.0f;
    double somed = 4.0 * 2.0;

    printf("### 转换输出 float, double and long double 类型变量 ###\n");
    printf("%f can be written %e\n", aboat, aboat);
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %E\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    printf("### 测试默认为 double 类型浮点数运算 ###\n");
    printf("somef is %f\n", somef);
    printf("somed is %f\n", somed);

    return 0;
}
