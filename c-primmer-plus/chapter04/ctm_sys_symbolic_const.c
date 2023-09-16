// sys_symbolic_const.c - 使用 limits.h 与 float.h 中定义的符号常量
#include <stdio.h>
#include <limits.h>  /* limits.h 头文件中定义系统的符号常量 */
#include <float.h>

int main(void) {
    printf("Some number limits for this system: \n");
    printf("Biggest int: %d\n", INT_MAX);  // 有符号整型数显示添加 "+" 号并占 20 个字符宽度
    // printf("Maximum int value on the system = %d\n", INT_MAX);
    printf("Smallest signed long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    return 0;
}
