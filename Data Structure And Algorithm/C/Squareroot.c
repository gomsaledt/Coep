// C program to show use of sqrt() function to get squareroot
#include<stdio.h>
#include<math.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("square root of %d = %.2f", a, sqrt(a));
    return 0;
}