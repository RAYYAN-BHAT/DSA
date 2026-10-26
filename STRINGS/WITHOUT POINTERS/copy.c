#include <stdio.h>


void copy(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; // Null-terminate the copied string
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char str2[100];
    copy(str, str2);

    printf("Copied string: %s", str2);

    return 0;
}