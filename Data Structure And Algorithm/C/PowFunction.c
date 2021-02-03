// C program to show use of pow() function to evaluate y = a + a^2 + a^3
#include<stdio.h>
#include<math.h>

int main(){
    int a, y;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    y = a + pow(a, 2) + pow(a, 3);
    printf("y = %d", y);
    return 0;
}