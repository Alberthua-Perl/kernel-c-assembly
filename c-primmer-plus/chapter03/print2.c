#include <stdio.h>

int main(void) {
	int a = 4096;
	long b = 12L;  /* 使用l或L后缀表示 long 类型的变量 */

	printf("a is %d\n", a);
	printf("b is %ld\n", b);  /* 可正常打印 b 变量 */

	return 0;
}
