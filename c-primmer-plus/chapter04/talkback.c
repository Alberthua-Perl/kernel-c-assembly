// talkback.c - 演示与用户交互
#include <stdio.h>
#include <string.h>  // 提供 strlen() 函数的原型
#define DENSITY 62.4  // C 预处理器指令：define

int main(void) {
    float weight, volume;
    int size, letters;
    char name[40];  // 字符串定义：char 类型的数组

    printf("Hi! What's your first name?\n");
    scanf("%s", name);  // 刷新缓冲区
    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;  // sizeof 操作符返回 name 字符串变量的大小（即内存中占用的字节数）
    letters = strlen(name);  // strlen() 函数返回字符串的字符数量
    volume = weight / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", 
           name, volume);
    printf("Also, your first name has %d letters, \n", 
           letters);
    printf("and we have %d bytes to store it.\n", size);

    return 0;
}
    