#include <stdio.h>
#include <stdlib.h>

void input(float *length, float *width){
    printf("Enter the length of the rectangle: ");
    scanf("%f", length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", width);
}

float calculateThePerimeter(float length, float width) {
    return 2 *  (length + width);
}

float calculateTheAcreage(float length, float width) {
    return length * width;
}

void output(float perimeter, float acreage){
    printf("The perimeter of the rectangle is %.2f\n", perimeter);
    printf("The area of rectangle is %.2f\n", acreage);
}

int main() {
    system("cls");
    float length, width, perimeter, acreage;
    input(&length, &width);   
    perimeter = calculateThePerimeter(length, width);
    acreage = calculateTheAcreage(length, width);
    output(perimeter, acreage);

   return 0;
}
