#include <stdio.h>

int main(void)
{
	int num;
	num = 1;

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);

	getchar();
 	/*
 	*  程序将处于阻塞状态，该函数将等待用户按下一个键后返回。
 	*/
	return 0;
}
