// C program to swap two number using third variable
#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping:\na = %d\nb = %d\n\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("After swapping:\na = %d\nb = %d", a, b);
    return 0;
}