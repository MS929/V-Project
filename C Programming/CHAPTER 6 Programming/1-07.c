#include <stdio.h>

int main(void)
{
    float weight, height, avg;

    printf("체중과 키를 입력하시오: ");
    scanf("%f %f", &weight, &height);

    avg = (height - 100) * 0.9;

    if (avg < weight)
        printf("과체중입니다.\n");
    else if (avg == weight)
        printf("표준입니다.\n");
    else
        printf("저체중입니다.\n");

    return 0;
}