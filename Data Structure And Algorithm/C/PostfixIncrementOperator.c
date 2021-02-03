// C program to show use of postfix increment operator
#include<stdio.h>

int main(){
    int a, y;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    y = a++;    // use of postfix increment operator
    printf("a = %d\ny = %d", a, y);
    return 0;
}