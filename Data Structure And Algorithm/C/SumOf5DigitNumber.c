// C program to calculate sum of 5 digit number
#include<stdio.h>

int main(){
    int a, b, c, d, e, num;
    printf("Enter the 5 digit number: ");
    scanf("%d", &num);
    a = num % 10;
    num /= 10;
    b = num % 10;
    num /= 10;
    c = num % 10;
    num /= 10;
    d = num % 10;
    num /= 10;
    e = num % 10;
    num /= 10;
    num = a + b + c + d + e;
    printf("Sum of digits of 5 digit number = %d", num);
    return 0;
}