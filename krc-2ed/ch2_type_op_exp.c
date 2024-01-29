#include <stdio.h>

// 2.7 类型转换
int atoi(char s[])
{
	int i, n;
  
	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
		//printf("%d: %d\n", i, n);
	return n; 
}

int main(void)
{
  // 2.5 算术运算符
  int year;

  printf("Please type year: ");
  scanf("%d", &year);
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)  // 取模运算符（取余数）
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);

  // 2.7 类型转换：atoi 函数将字符串 s 转换为相应的整形数
  char str[] = "hello world!";
  atoi(str);

  return 0;
}

