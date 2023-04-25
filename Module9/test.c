#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    int income, tax_payable = 0;

    printf("Enter of the income is ");
    scanf("%d", &income);

    if (income <= 9525){
        tax_payable = income * 0 / 10;
        printf("Tax payable is %d", tax_payable);
    } else 
    if (income >= 9526 && income <= 38700){
        tax_payable = income * 12 / 100;
        printf("Tax payable is %d", tax_payable);
    } else
    if (income >= 38701 && income <= 82500){
        tax_payable = income * 22 / 100;
        printf("Tax payable is %d", tax_payable);
    } else
    if (income > 82500){
        tax_payable = income * 32 / 100 + 1000;
        printf("Tax payable is %d", tax_payable);
    }
    return 0;
}