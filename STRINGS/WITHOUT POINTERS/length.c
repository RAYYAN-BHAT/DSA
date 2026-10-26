#include <stdio.h>

int length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Length of the string: %d\n", length(str) - 1); // Subtracting 1 to exclude the newline character
    
    
    return 0;
}