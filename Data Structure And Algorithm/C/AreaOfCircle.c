// C program to calculate area of cicle
#include<stdio.h>
#define PIE 3.1415

int main(){
    float area, radius;
    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    area = PIE * radius * radius;   // as area = pie*r^2
    printf("Area = %f", area);
    return 0;
}