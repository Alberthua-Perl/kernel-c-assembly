#include <stdio.h>

/* 统计标准输入的行数 */
int main(void)
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("line count is: %d\n", nl);

    return 0;
}
