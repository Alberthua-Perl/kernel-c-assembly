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

/* 各类整形变量的取值范围：
           short, int (2^16, 16 bit): [-32768, 32767]
            int, long (2^32, 32 bit): [-2147483648, 2147483647]
            long long (2^64, 64 bit): [-9223372036854775808, 9223372036854775807]

  unsigned short, int (2^16, 16 bit): [0, 65535]
   unsigned int, long (2^32, 32 bit): [0, 4294967295]
   unsigned long long (2^64, 64 bit): [0, 18446744073709551616]
  
  long 与 long long 整数类型：
  
 */
