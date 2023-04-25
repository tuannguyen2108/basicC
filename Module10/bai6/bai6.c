#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    system("cls");

    char str1[100], str2[100], num_str1[100], num_str2[100];
    int i, j = 0, k = 0;
    double num1, num2; 

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);
    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    for (i = 0; i < strlen(str1); i++)
    {if (str1[i] >= '0' && str1[i] <= '9'){num_str1[j] = str1[i]; j++;}}
    num_str1[j] = '\0';

    for (i = 0; i < strlen(str2); i++)
    {if (str2[i] >= '0' && str2[i] <= '9'){num_str2[k] = str2[i]; k++;}}
    num_str2[k] = '\0';

    num1 = atoi(num_str1);
    num2 = atoi(num_str2);

    int dec1 = (int)num1 / 1000000;
    double min1 = (num1 - (dec1*1000000)) / 1000000 * 60;
    int min1int = (int)min1;
    double sec1 = (min1 - min1int) * 60;
    printf("Latitude is %d°%.0f'%.1f\"\n", dec1, min1, sec1); 

    int dec2 = (int)num2 / 1000000;
    double min2 = (num2 - (dec2*1000000)) / 1000000 * 60;
    int min2int = (int)min2;
    double sec2 = (min2 - min2int) * 60;

    printf("Longitude is %d°%.0f'%.1f\"\n", dec2, min2, sec2); 
    //alt + 0176
    return 0;
}
