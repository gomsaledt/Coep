// C program to show use of bitwise operator
#include<stdio.h>

int main(){
    int a = 12, b = 5, z;

    z = a & b;  // use of & operator
    printf("%d & %d = %d\n", a, b, z);
    
    z = a | b;  // use of | operator 
    printf("%d | %d = %d\n", a, b, z);

    z = a ^ b;  // use of ^ operator 
    printf("%d ^ %d = %d\n", a, b, z);

    z = a << b; // use of << operator
    printf("%d << %d = %d\n", a, b, z);

    z = a >> b; // use of >> operator 
    printf("%d >> %d = %d\n", a, b, z);

    z = ~a;     // use of ~ operator
    printf("~%d = %d\n", a, z); 
    return 0;
}