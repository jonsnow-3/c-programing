/*Name of Student : Saif Arif Bhati
UIN 251P077
Class : F.E. Computer Engineering 
Div : D 
Age : 19*/
#include <stdio.h>
int isPalindrome(char str[]) {
    int start = 0, end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--;
    if (str[end] == '\n') {
        str[end] = '\0';
        end--;
    }
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (isPalindrome(str))
        printf("The string is a Palindrome.");
    else
        printf("The string is NOT a Palindrome.");
    return 0;
}
