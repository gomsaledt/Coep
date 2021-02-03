// C program to add two number without using third number
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    a += b;     // use of += operator which mean a = a + b
    printf("Addition = %d", a);
    return 0;
}