#include <stdio.h>

/* 统计标准输入的字符、行数与单词数 */
#define IN 1    /* 在单词内 */
#define OUT 0   /* 在单词外 */

int main(void)
{
    int c, nc, nl, nw, state;
    nc = nl = nw = 0;
    state = OUT;
    
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            /* 若连续输入多个上述字符，则 state 始终为 OUT，不进入单词计数。
             * 该程序的关键在于考虑何时开启单词计数 */
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("count of chars, lines, words: %d, %d, %d\n",
            nc, nl, nw);

    return 0;
}

