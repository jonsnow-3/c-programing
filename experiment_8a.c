/*Name of Student : Saif Arif Bhati
UIN 251P077
Class : F.E. Computer Engineering 
Div : D 
Age : 19*/
#include <stdio.h>

int findLength(char str[]) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = findLength(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    printf("Length of string = %d", len);
    return 0;
}
