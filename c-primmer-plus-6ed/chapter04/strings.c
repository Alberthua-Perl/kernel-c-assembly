/* strings.c - 字符串的格式化 */
#include <stdio.h>
#define BLURB "Authentic imiation! "

int main(void)
{
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%024.5s/\n", BLURB);  // 最小精度位数与前导 0 同时出现，忽略前导 0.
    printf("/%-24.5s/\n", BLURB);

    return 0;
}
