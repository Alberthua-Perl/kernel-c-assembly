/* intconv.c - 整型数类型不匹配的转换说明 */
// 示例要点：2 的补码方式、数值的截断处理
#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void) {
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);  // 输出为 -336 65200
    // 若使用 unsigned short 对应有符号整形数，其使用 2 的补码方式实现，即在当前系统中 0-32767
    // 表示数字本身，而 32768-65535 表示负数，65535(65536-1) 表示 -1，65534(65536-2) 表示 -2，
    // 因此，65200(65526-336) 表示 -336。
    printf("num as int and char: %d %c\n", num, num);  // 输出为 336 P
    // 当前 short int 类型占 2 字节，而 char 类型占 1 字节，因此，336 转换为二进制数值后进行
    // 截断处理，使用最后 1 个字节表示即十进制数值 80，对应的 ASCII 字符为 P。
    printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);  // 输出为 65618 82 R
    // 同理，int 类型占 4 字节，short int 占 2 字节，65618 转换为二进制数值后进行截断处理，使用
    // 最后 2 个字节表示十进制数值 82，对应的 ASCII 字符为 R。

    return 0;
}

