// C progarm to evaluate quadratic equation y = a^2 + 10a + 12
#include<stdio.h>

int main(){
    int a, y;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    y = a * a + 10 * a + 12;
    printf("y = %d", y);
    return 0;
}