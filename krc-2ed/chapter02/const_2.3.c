#include <stdio.h>
#define MAXSTR 65535

int strlength(char string[]);

int main(void)
{
	int i, c;
	char input[MAXSTR];

	for (i = 0; i <= MAXSTR-1 && (c = getchar()) && c != EOF && c != '\n'; ++i) {
		input[i] = c;
	}
	if (c == '\n') {
		input[i] = '\n';
		++i;
	}
	input[i] = '\0';

	long len = strlength(input);
	printf("String length: %ld\n", len);

	return 0;
}

int strlength(char s[])
{
	int i = 0;

	while (s[i] != '\0') {
		++i;
	}

	return i;
}

