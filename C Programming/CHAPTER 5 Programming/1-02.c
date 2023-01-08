#include <stdio.h>

int main()
{
    double x, y;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    printf("합: %lf 차: %lf 곱: %lf 차: %lf \n", x + y, x - y, x * y, x / y);

    return 0;
}