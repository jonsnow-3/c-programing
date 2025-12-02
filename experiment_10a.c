/*Name of Student : Saif Arif Bhati
UIN 251P077
Class : F.E. Computer Engineering 
Div : D 
Age : 19*/
#include <stdio.h>

int main() {
    int a, b, sum;
    int *p, *q;

    p = &a;
    q = &b;

    printf("Enter first number: ");
    scanf("%d", p);
    printf("Enter second number: ");
    scanf("%d", q);

    sum = *p + *q;
    printf("Sum = %d", sum);
    return 0;
}
