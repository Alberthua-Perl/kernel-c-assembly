/* squares.c -- 递增数列的平方数 */
#include <stdio.h>

int main(void)
{
    int num = 1;

    printf(" num  num^2\n");
	while(num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}
	return 0;
}

