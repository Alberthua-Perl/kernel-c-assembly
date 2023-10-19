/* praise1.c - 使用不同类型的字符串 */
#include <stdio.h>
#include <string.h>  /* 提供 strlen() 函数原型 */
#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    short length;
    char s[6] = "";  /* 定义空字符串 */
    length = strlen(s);  /* 实际字符串以 \0 结尾（占1字节）*/

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("The length of s is %hd\n", length);

    return 0;
}
