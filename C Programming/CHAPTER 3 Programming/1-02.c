#include <stdio.h>

int main()
{
    int mile;
    double meter;

    printf("마일을 입력하시오 : ");
    scanf("%d", &mile);

    meter = 1609.0 * mile;

    printf("%d마일은 %lf미터입니다.\n", mile, meter);

    return 0;
}