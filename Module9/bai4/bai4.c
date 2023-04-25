#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    system("cls");
    float a, b, c, delta, x1, x2;

    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    printf("Input c = ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (a == 0)
    {
        return 0;
    }
    else
    {
        if (delta < 0)
        {
            printf("Phuong trinh vo nghiem.\n");
        }
        else if (delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x1 = x2 = %.2f.\n", x1);
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
    return 0;
}
