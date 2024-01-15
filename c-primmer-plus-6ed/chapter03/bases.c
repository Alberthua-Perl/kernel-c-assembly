#include <stdio.h>

int main(void)
{
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dex = %d; octal = %#o; hex = %#x\n", x, x, x);
	/* 十进制、八进制与十六进制显示数值前缀 */
	return 0;
}
