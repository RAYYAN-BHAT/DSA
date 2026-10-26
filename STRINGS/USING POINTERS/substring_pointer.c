#include <stdio.h>
#include <string.h>

/*
 * findSubstring()
 * This function walks through the main string using pointer `s`.
 * For each position in `str`, it compares the remaining characters with `sub`.
 *
 * `a` and `b` are temporary pointers:
 * - `a` moves on the main string
 * - `b` moves on the substring
 *
 * If the substring ends (`*b == '\0'`), we found a match.
 * The index is computed using pointer arithmetic: `s - str` gives how many
 * characters we moved from the start before the match was found.
 */
int findSubstring(const char *str, const char *sub) {
    const char *s = str;

    while (*s != '\0') {
        const char *a = s;
        const char *b = sub;

        while (*b != '\0' && *a == *b) {
            a++;
            b++;
        }

        if (*b == '\0') {
            return (int)(s - str);
        }

        s++;
    }

    return -1;
}

int main() {
    char str[100];
    char sub[100];
    int result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the substring to search: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    result = findSubstring(str, sub);

    if (result == -1) {
        printf("Substring not found.\n");
    } else {
        printf("Substring found at index %d.\n", result);
    }

    return 0;
}
