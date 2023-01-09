#include <stdio.h>

int main(void)
{
    int time, age;

    printf("현재 시간과 나이를 입력하시오(시간, 나이): ");
    scanf("%d %d", &time, &age);

    if (time < 17)
    {
        if (age < 13 || 65 <= age)
            printf("요금은 25000입니다.\n");
        else
            printf("요금은 34000입니다.\n");
    }
    else
        printf("요금은 10000입니다.\n");

    return 0;
}