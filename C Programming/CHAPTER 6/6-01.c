#include <stdio.h>

int main()
{
    int number;

    printf("점수를 입력하세요: ");
    scanf("%d", &number);

    if (number > 0)
        printf("양수입니다.\n");

    printf("입력된 값은 %d입니다.\n", number);

    return 0;
}