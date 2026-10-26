#include <stdio.h>

int findSubstring(char str[], char substring[])
{
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        j = 0;

        while (substring[j] != '\0' && str[i + j] == substring[j]) {
            j++;
        }

        if (substring[j] == '\0') {
            return i;
        }
    }

    return -1;
}

int main()
{
    char str[100];
    char substring[100];
    int i, result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    printf("Enter the substring to search: ");
    fgets(substring, sizeof(substring), stdin);
    for (i = 0; substring[i] != '\0'; i++) {
        if (substring[i] == '\n') {
            substring[i] = '\0';
            break;
        }
    }

    result = findSubstring(str, substring);
    if (result == -1) {
        printf("Substring not found.\n");
    } else {
        printf("Substring found at index %d.\n", result);
    }

    return 0;
}