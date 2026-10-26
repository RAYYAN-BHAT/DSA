#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main(void) {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    

    str[strcspn(str, "\n")] = '\0';

    reverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
