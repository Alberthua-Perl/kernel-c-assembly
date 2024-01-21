#include <stdio.h>

//算术运算符
int year;

int main(void)
{
  printf("Please type year: ");
  scanf("%d", &year);
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)  // 取模运算符（取余数）
		printf("%d is a leap year.\n", year);
	else
		printf("%d is not a leap year.\n", year);

  return 0;
}

