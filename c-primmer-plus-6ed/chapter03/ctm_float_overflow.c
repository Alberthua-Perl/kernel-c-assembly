/* float_overflow.c - 浮点值的上溢 */
#include <stdio.h>

int main(void)
{
    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);  /* 浮点值的上溢 overflow，打印结果 inf。*/

    return 0;
}
