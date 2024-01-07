/* charcode.c - 显示字符的代码编号 */
#include <stdio.h>

int main(void)
{
    unsigned char ch;
    char nerf = '\n';

    printf("character nerf is %c. This is another line.\n", nerf);   /* 打印字符变量的值 */
    printf("character nerf is %#x. This is another line.\n", nerf);  /* 以十六进制整数形式打印字符变量的值 */
    printf("Hello World!\007\n");  /* 使用八进制形式转义序列指定 ASCII 码 */

    printf("Please enter a character: ");
    scanf("%c", &ch);
    printf("The ascii code for %c is %d.\n", ch, ch);  /* printf() 函数自动转换字符变量与整数类型的 ASCII 对应关系 */

    return 0;
}
