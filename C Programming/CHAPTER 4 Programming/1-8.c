#include <stdio.h>

int main(void)
{
    int code;

    printf("아스키 코드 값을 입력하세요: ");
    scanf("%d", &code);

    printf("문자: %c입니다. \n", code);

    return 0;
}