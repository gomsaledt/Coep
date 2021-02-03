// C program to show use of ternary/conditional operator
#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    c = (a > b)? a: b;  // use of ternary operator for determinig greatest of two numbers
    printf("%d is the greatest number", c);
    return 0;
}