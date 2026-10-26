#include <stdio.h>
#include <string.h>

/*
 * compareStrings()
 * We compare two strings character by character using pointers.
 * `const` is used for both strings because we only read them.
 *
 * Return values:
 * 0  -> strings are equal
 * >0 -> str1 is lexicographically greater than str2
 * <0 -> str1 is lexicographically smaller than str2
 *
 * This works because pointer arithmetic moves us forward through each string,
 * and the comparison uses the character values directly (`*str1 > *str2`).
 */
int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }

    if (*str1 == *str2) {
        return 0;
    }

    return (*str1 > *str2) ? 1 : -1;
}

int main() {
    char str1[100];
    char str2[100];
    int result;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
