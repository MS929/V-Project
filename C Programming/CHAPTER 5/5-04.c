#include <stdio.h>

int main()
{
    int x = 10, y = 10;

    printf("x=%d\n", x);
    printf("++의 값=%d\n", ++x);
    printf("x=%d\n\n", x);

    printf("y=%d\n", y);
    printf("y++의 값=%d\n", y++);
    printf("x=%d\n\n", y);

    return 0;
}