/* integer_overflow.c - 超出系统上的最大整数值 (整形溢出测试) */
#include <stdio.h>

int main(void) {
	int i = 2147483647;  /* int 类型变量的最大值 */
	unsigned long j = 4294967295;  /* long 类型变量的最大值 */

	printf("%d %d %d\n", i, i+1, i+2);
    /* 输出为：2147483647 -2147483648 -2147483647 
       值超出最大取值范围将溢出至起始点 -2147483648 */
	printf("%u %u %u\n", j, j+1, j+2);
    /* 输出为：4294967295 0 1 */
	return 0;
}
