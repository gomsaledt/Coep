// C program to show use of postfix decrement operation
#include<stdio.h>

int main(){
    int a, y;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    y = a--;
    printf("a = %d\ny = %d", a, y);
    return 0;
}