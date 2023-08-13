#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %d letters occupies %zd memory cells.\n", 
            strlen(name), sizeof name);
    printf("The phrase of praise has %d letters ", 
            strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);  /* 字符串常量末尾的空字符占1个字节 */ 

    return 0;
}
