// C program to swap two number without using third variable
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    
    printf("Before swapping:\na = %d\nb = %d\n\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\na = %d\nb = %d", a, b);
    return 0;
}