#include <stdio.h>


void compare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("The strings are not equal.\n");
            return;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the newline character from the first string
    
    char str2[100];
    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character from the second string

    

    compare(str, str2);
    return 0;
}