#include <stdio.h>

/* 统计输入的字符数：版本2 */
int main(void)
{
    long nc;

    for (nc = 0; getchar() != EOF; ++nc) {
        ;
    }
    printf("char count is: %ld\n", nc);

    return 0;
}
