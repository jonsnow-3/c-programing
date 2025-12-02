/*Name of Student : Saif Arif Bhati
UIN 251P077
Class : F.E. Computer Engineering 
Div : D 
Age : 19*/
#include <stdio.h>

int main() {
    int a[100], n, i;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    p = &a[n - 1];

    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", *p);
        p--;
    }

    return 0;
}
