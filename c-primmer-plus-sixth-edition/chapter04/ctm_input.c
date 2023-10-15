/* input.c - 什么情况下使用 & */
#include <stdio.h>

int main(void) {
    int age;
    float assets;
    //double assets;
    char pet[30];
    char wd;
    /* 注意：
     * 1. 单独声明字符数组需指定大小否则编译不通过
     * 2. 若程序运行中设置的字符串超出声明的数组大小即发生内存越界而运行报错：
     *    [1]    <pid> segmentation fault (core dumped)  ./input
     */

    printf("Enter your age, assets and favorite pet.\n");
    unsigned short item = scanf("%d,%f%c", &age, &assets, &wd);  // 格式字符串中的普通字符；scanf() 函数返回成功读取的项数
    /* scanf("%d,%f %c", &age, &assets, &wd);  以上操作符结果与此行结果相同（跳过空白读取第一个非空白字符） */
    /* scanf("%d %lf ", &age, &assets);  使用 l 修饰符表示 double 类型 */
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);
    /* printf("%d $%.3lf %s\n", age, assets, pet);  使用 l 修饰符表示 double 类型 */
    // 测试 %c 在 scanf() 函数中的作用
    printf("wd is %c\n", wd);
    printf("* First scanf() function return %hu items.\n", item);

    return 0;
}

