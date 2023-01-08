#include <stdio.h>

int main(void)
{
    double d, angle, r;

    printf("거리를 입력하시오:");
    scanf("%lf", &d);

    printf("각도를 입력하시오:");
    scanf("%lf", &angle);

    r = 360 / angle * d / 2 / 3.14;

    printf("지구의 반지름은 %f \n", r);

    return 0;
}