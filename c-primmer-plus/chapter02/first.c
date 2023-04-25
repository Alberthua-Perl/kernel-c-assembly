#include <stdio.h>

int main(void)
{
	int num;
	num = 1;

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);
	/* printf() 为标准库函数 */

	getchar();
 	/* 该函数将等待用户按下一个键后返回。该程序不等待 I/O 设备的响应，只等待用户的键盘输入，
	   因此不被系统识别为 blocked 状态。*/

	// return 0;
	/* main() 函数最终返回整数即可，对返回的实际值没有要求。最终的 retuen 语句可省略，
	   程序将最终返回 0 结束。*/
}