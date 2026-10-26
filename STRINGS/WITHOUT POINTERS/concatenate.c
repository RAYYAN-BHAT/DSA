#include <stdio.h>


void concatenate(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the concatenated string
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

    concatenate(str, str2);
    printf("Concatenated string: %s", str);



    return 0;
}
