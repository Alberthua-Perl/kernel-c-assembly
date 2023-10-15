/* width.c - 字段宽度 */
#include <stdio.h>
#define PAGE 931

int main(void) {
    printf("*%d*\n", PAGE);
    printf("*%2d*\n", PAGE);
    printf("*%10d*\n", PAGE);  // 向右对齐占 10 个字符
    printf("*%-10d*\n", PAGE);  // 向左对齐占 10 个字符

    return 0;
}
