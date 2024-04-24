/* 此示例使用 ANSI C 规范与 GDB 调试，因此编译运行时使用以下命令：
 *  $ gcc char_array_1.9.c -ansi -g -o char_array_1.9
 */
#include <stdio.h>
#define MAXLINE 1000    /* 允许输入行的最大长度 */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* 打印最长的输入行 */
int main(void)
{
    int len;    /* 当前行长度 */
    int max;    /* 目前为止发现的最长行的长度 */
    char line[MAXLINE];     /* 当前的输入行 */
    char longest[MAXLINE];  /* 用于保存最长的输入行 */

    max = 0;    /* 初始化最长行的长度 */
    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    printf("\n => NOTE: total chars %d: %s\n", max, longest);
    /* 由于 max 由 len 赋值，其值大于 0，而无需示例代码中的条件判断 */
    /* if (max > 0)
     *     printf("### %d chars: %s\n", max, longest);
     */
    
    return 0;
}

/* getline 函数：将输入的一行读入 s 中并返回其长度 */
int getline(char s[], int lim)
{
    int c, i;
    
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }	/* ++i 为更新表达式，在每次循环的最后执行 */
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';    /* 标记字符数组结束 */

    return i;
}

/* copy 函数：将 from 复制到 to，此处假定 to 足够大 */
void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

