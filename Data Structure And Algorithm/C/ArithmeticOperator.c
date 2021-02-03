// C program to perform arithmetic operation

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    c = a + b;  // use of + operator for addition
    printf("Addition = %d\n", c);

    c = a - b;  // use of - operator for subtraction
    printf("Subtracttion = %d\n", c);

    c = a * b;  // use of * operator for multiplication
    printf("Multiplication = %d\n", c);

    c = a / b;  // use of / operator for division
    printf("Division = %d\n", c);

    c = a % b;  // use of % operator for calculating remainder
    printf("Remainder = %d\n", c);
    return 0;
}