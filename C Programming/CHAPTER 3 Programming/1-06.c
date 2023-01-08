#include <stdio.h>

int main()
{
    double earth;
    double moon;

    printf("몸무게를 입력하세요(단위: kg) : ");
    scanf("%lf", &earth);

    moon = earth * 0.17;

    printf("달에서의 몸무게는 %lf입니다.\n", moon);

    return 0;
}