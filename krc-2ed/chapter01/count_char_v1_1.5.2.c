#include <stdio.h>

int main(void)
{
    long nc = 0;

    while (getchar() != EOF) {  // 输入至字符末尾处还包含换行符
        ++nc;
    }
    printf("char count is: %ld\n", nc);

    return 0;
}
