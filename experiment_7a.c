/*Name of Student : Saif Arif Bhati
UIN 251P077
Class : F.E. Computer Engineering 
Div : D 
Age : 19*/
#include <stdio.h>

int main() {
    int arr[100], n, i, largest, position = 0;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            position = i;
        }
    }

    printf("\n\nThe largest element in the array is: %d", largest);
    printf("\nIt is present at position: %d\n", position + 1);

    printf("\nProgram executed successfully.\n");

    return 0;
}
