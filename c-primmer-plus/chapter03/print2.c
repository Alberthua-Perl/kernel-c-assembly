#include <stdio.h>

int main(void) {
	printf("### 转换输出 int 与 long 类型变量 ###\n");
	int a = 4096;
	long b = 12L;  /* 使用 l 或 L 后缀表示 long 类型的变量 */

	printf("a is %d\n", a);
	printf("b is %ld\n", b);  /* 可正常打印 b 变量 */

	/* 声明与格式化输出 unsigned、short、long、long long 类型整数 */
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

    printf("### 转换输出 unsigned, short, long, long long 类型变量 ###\n");
	printf("un = %u and not %d\n", un, un);
	/* 输出中的这两个值在系统内存中表示完全相同 */
	printf("end = %hd and not %d\n", end, end);
	/* 编译器将 short 类型的值自动转换成 int 类型的值，int 类型被认为是计算机处理整数类型时最高效的类型。*/
	printf("big = %ld and not %hd\n", big, big);
	/* long 类型的值 65537 转换为 32 位二进制的值，使用 %hd，printf() 只查看后 16 位，所以值为 1。
	   使用 h 修饰符可以显示较大整数被截断为 short 类型的情况。*/
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
}
