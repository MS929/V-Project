#include <stdio.h>

int main()
{
    int x, y, z;
    int max = 0;

    printf("3개의 정수를 입력하세요: ");
    scanf("%d %d %d", &x, &y, &z);

    max = (x > y) ? x : y;
    max = (max > z) ? max : z;

    printf("최대값: %d \n", max);

    return 0;
}