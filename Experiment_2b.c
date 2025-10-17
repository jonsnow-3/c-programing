#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even or odd using conditional operator
    (num % 2 == 0) ? printf("The number %d is Even.\n", num) : printf("The number %d is Odd.\n", num);

    return 0;
}
