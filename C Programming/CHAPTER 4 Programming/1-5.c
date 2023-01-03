#include <stdio.h>

int main(void)
{
    const double SQMETER_PER_PYEONG = 3.3058;
    double pyeong;

    printf("평을 입력하세요: ");
    scanf("%lf", &pyeong);

    printf("%lf평방미터입니다. \n", pyeong * SQMETER_PER_PYEONG);

    return 0;
}