#include <stdio.h>

int main(void)
{
    double radius;
    scanf("%lf", &radius);
    if (radius > 0)
    {
        printf("%.2f", radius * radius * 22.0);
    }
    else
    {
        printf("NG");
    }
    return 0;
}
