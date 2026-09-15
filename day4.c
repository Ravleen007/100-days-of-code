#include <stdio.h>

int main()
{
    float r, area, circumference;

    scanf("%f", &r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}
