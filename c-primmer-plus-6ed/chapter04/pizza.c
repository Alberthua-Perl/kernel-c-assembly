#include <stdio.h>
#define Pi 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = Pi * radius * radius;
    circum = 2.0 * Pi * radius;
    printf("Your basic pizza parameters are as followings: \n");
    printf("circumference = %1.2f, area = %1.2f\n",
          circum, area);

    return 0;
}
