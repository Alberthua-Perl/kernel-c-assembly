/* C 库函数 - getchar() 与 putchar() */
#include <stdio.h>

void main(void)
{
	printf("Get char from STDIN: ");
	int c = getchar();  /* 定义声明整形变量 */
	
	while (c != EOF) {  /* 判断字符是否为文件结束标志符 EOF */
		printf("\nSTDIN char is: ");
		putchar(c);  /* 将从标准输入读取的字符输出至标准输出 */
		printf("\nGet char from STDIN again: ");
		c = getchar();  
		/* getchar() 函数一次只读取一个字符，因此，在下一个循环中将再次
		 * 读取一个字符。*/
	}
}

