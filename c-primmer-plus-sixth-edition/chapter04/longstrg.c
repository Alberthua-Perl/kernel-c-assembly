/* longstrg.c - 打印较长的字符串 */
#include <stdio.h>

int main(void)
{
    printf("Here's the first way to print a ");
    printf("long string.\n");
    printf("Here's the second way to print a \
            long string.\n");  // 该语句将打印多余的空格
    //printf("Hers's the third way to print a 
    //        long string.\n");
    // 以上语句为错误的使用方法，造成编译失败。
    printf("Here's the third way to print a "
           "long string.\n");  // ANSI C
    getchar();

    return 0;
}
