#include <stdio.h>

int main()
{
    int x, y;

    printf("두개의 정수를 입력하세요: ");
    scanf("%d%d", &x, &y);

    printf("%d && %d의 결과값: %d\n", x, y, x && y);
    printf("%d || %d의 결과값: %d\n", x, y, x || y);
    printf("!%d의 결과값: %d\n", x, !x);

    return 0;
}