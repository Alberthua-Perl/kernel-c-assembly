#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in ponds: ");
    
    scanf("%f", &weight);
    /* 等待用户输入，scanf() 函数处于阻塞状态。
       其中 &weight 为指向浮点数变量 weight 的指针 */
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}
