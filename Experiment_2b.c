#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Input range from user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Find sum of all odd numbers in range
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {   // Check if number is odd
            sum += i;
        }
    }

    // Display result
    printf("\nSum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
