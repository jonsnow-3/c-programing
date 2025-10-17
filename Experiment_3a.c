#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

menu:  // Label for goto
    printf("\n=== SIMPLE CALCULATOR ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("--------------------------\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("\nExiting the calculator. Goodbye!\n");
        return 0;
    }

    printf("\nEnter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("\nResult: %.2f × %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("\nError! Division by zero is not allowed.\n");
                goto menu;  // Return to menu
            }
            printf("\nResult: %.2f ÷ %.2f = %.2f\n", num1, num2, result);
            break;
        default:
            printf("\nInvalid choice! Please try again.\n");
            break;
    }

    // Ask user if they want to continue
    printf("\nDo you want to perform another operation? (1 = Yes / 0 = No): ");
    int again;
    scanf("%d", &again);

    if (again == 1)
        goto menu;  // Jump back to menu
    else
        printf("\nThank you for using the calculator!\n");

    return 0;
}
