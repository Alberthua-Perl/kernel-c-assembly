/* altnames.c - 可移植整数类型名 */
#include <stdio.h>
#include <inttypes.h>  /* 该头文件中定义了整数类型打印的宏 */

int main(void) {
    int32_t me32;  /* 32 位有符号整数类型 */

    me32 = 45933945;
    printf("First, assum int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}
