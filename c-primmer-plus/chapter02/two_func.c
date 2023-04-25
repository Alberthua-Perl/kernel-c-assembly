#include <stdio.h>

//void butler(void);  /* ANSI/ISO C 函数原型 */
void butler(void)  /* 函数定义开始 */
{
    printf("You rang, sir?\n");
}

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    /* 只有预定义函数才能调用函数，否则编译报错，因此可先定义函数原型再创建函数，
       或在调用前直接创建函数。 */
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}