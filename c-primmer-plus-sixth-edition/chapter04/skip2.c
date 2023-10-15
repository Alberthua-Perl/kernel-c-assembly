/* skip2.c - 跳过输入中的前两个整数 */
#include <stdio.h>

int main(void) {
    int n;
    
    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);  // 输入前两个整数后将跳过，只读取第三个整数。 
    printf("The last integer was %d\n", n);

    return 0 ;
}

