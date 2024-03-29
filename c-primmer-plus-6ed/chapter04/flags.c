/* flags.c - 一些格式标志的使用示例 */
#include <stdio.h>

int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);  // 最后参数的负号将占用前导空格
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    // 输出为：**    6**  006**00006**  006**
    // 其中 %5.3d 表示整型数最小数字位数为 3 位，字段宽度占 5 个字符。

    return 0;
}
