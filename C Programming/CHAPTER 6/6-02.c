#include <stdio.h>

int main()
{
    int number;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    if (number < 0)
        number = -number;

    printf("절대값은 %d입니다.\n", number);

    return 0;
}