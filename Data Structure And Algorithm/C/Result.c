// C program to calculate result of 5 subject
#include<stdio.h>

int main(){
    float a, b, c, d, e, total, percent;
    printf("Enter the marks in maths: ");
    scanf("%f", &a);
    printf("Enter the marks in English: ");
    scanf("%f", &b);
    printf("Enter the marks in biology: ");
    scanf("%f", &c);
    printf("Enter the marks in physics: ");
    scanf("%f", &d);
    printf("Enter the marks in chemistry: ");
    scanf("%f", &e);

    total = a + b + c + d + e;
    percent = total / 5.0;
    printf("Total = %.2f\n", total);
    printf("Percent = %.2f", percent);
    return 0;
}