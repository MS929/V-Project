#include <stdio.h>

int main(void)
{
    double x, y;

    printf("x 좌표를 입력하시오: ");
    scanf("%lf", &x);

    printf("y 좌표를 입력하시오: ");
    scanf("%lf", &y);

    (x > 0 && y > 0) ? printf("1사분면\n") : printf("");
    (x < 0 && y > 0) ? printf("2사분면\n") : printf("");
    (x < 0 && y < 0) ? printf("3사분면\n") : printf("");
    (x > 0 && y < 0) ? printf("4사분면\n") : printf("");

    return 0;
}