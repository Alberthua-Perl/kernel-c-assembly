/* C 库函数 - getchar() 与 putchar() */
#include <stdio.h>

/* 将输入复制到输出：版本1 */
void main(void)
{
	printf("Get char from STDIN: ");
	int c = getchar();  
	/* 定义声明整型变量：若启用以下 printf() 函数可打印出每个输入字符末尾的换行符 \n，
	 * getchar() 与 putchar() 函数将识别该特殊字符，可使用 Ctrl+D 中止输入并返回 */
	
	while (c != EOF) {  /* 判断字符是否为文件结束标志符 EOF */
		//printf("\nSTDIN char is: ");
		putchar(c);  /* 将从标准输入读取的字符输出至标准输出 */
		//printf("\nGet char from STDIN again: ");
		c = getchar();  
		/* getchar() 函数一次只读取一个字符，因此，在下一个循环中将再次
		 * 读取一个字符。*/
	}
}
