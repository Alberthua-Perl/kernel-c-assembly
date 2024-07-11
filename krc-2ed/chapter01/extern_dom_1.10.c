#include <stdio.h>
#define MAXLINE 1000

/* 定义函数外部变量 */
int max;	
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);	/* 未定义形参 */
void copy(void);

int main(void)
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getline()) > 0) {
		if (len > max) {
			max = len;
			copy();
		}
	}
	printf("\n => NOTE: total chars %d: %s\n", max, longest);

	return 0;
}

int getline(void)
{
	int i, c;
	extern char line[];

	for (i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';

	return i;
}

void copy(void)
{
	int i = 0;
	extern char line[], longest[];

	while ((longest[i] = line[i]) != '\0') {
		++i;
	}
}

