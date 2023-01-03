#include <stdio.h>

int main(void)
{
    double mass, speed, energy;

    printf("질량(kg): ");
    scanf("%lf", &mass);

    printf("속도(m/s): ");
    scanf("%lf", &speed);

    energy = 0.5 * mass * speed * speed;
    printf("운동에너지(J): %lf \n", energy);

    return 0;
}