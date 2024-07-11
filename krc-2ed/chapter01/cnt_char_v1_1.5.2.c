#include <stdio.h>

/* 统计输入的字符数：版本1 */
int main(void)
{
    long nc = 0;

    while (getchar() != EOF) {  // 输入的字符中换行符也计算在内
        ++nc;
    }
    printf("char count is: %ld\n", nc);

    return 0;
}
