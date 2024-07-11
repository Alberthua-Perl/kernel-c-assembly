#include <stdio.h>

/* 统计输入的字符数量，即数字、空白符(包括空格、
 * 制表符与换行符)以及其他字符 */
int main(void)
{
	int c, i, tc, nwhite, nother;
	int ndigit[10];

	tc = nwhite = nother = 0;
	for (i = 0; i < 10; ++i) {  /* 初始化数组 */
		ndigit[i] = 0;
    }

	while ((c = getchar()) != EOF) {
        ++tc;   /* 统计所有的输入字符数量 */
		if (c >= '0' && c <= '9') {
			++ndigit[c-'0'];    /* 转换字符为数字 */
		} else if (c == ' ' || c == '\t' || c == '\n') {
			++nwhite;
		} else {
			++nother;
        }
    }
    /* Ctrl+D 终止键盘输入 */

	printf("digits =");
	for (i = 0; i < 10; ++i) {
		printf(" %d", ndigit[i]);
        /* ndigit 为整型变量，若直接打印，返回一个整型值，因此，需使用循环逐一打印对应数字出现的数值 */
    }
	printf(", total char = %d, white space = %d, other = %d\n", 
            tc, nwhite, nother);  

    return 0;
}

