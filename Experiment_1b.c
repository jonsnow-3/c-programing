#include <stdio.h>

int main() {
    float phy, chem, math, avg;

    // Input marks
    printf("Enter marks in Physics: ");
    scanf("%f", &phy);
    printf("Enter marks in Chemistry: ");
    scanf("%f", &chem);
    printf("Enter marks in Mathematics: ");
    scanf("%f", &math);

    // Calculate average
    avg = (phy + chem + math) / 3;

    // Display average
    printf("\nAverage Marks: %.2f\n", avg);

    // Use conditional operator to check eligibility
    (avg >= 50) ? printf("Eligible for Admission\n") : printf("Not Eligible for Admission\n");

    return 0;
}
