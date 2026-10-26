#include <stdio.h>
#include <string.h>

/*
 * concatenate()
 * `destination` is writable, so it is `char *`.
 * `source` is read-only, so it is `const char *`.
 *
 * This version is simpler to read:
 * 1. Move `destination` to the end of the first string.
 * 2. Copy each character from `source` into the end of `destination`.
 * 3. Add the final '\0' so the result is still a valid C string.
 */
void concatenate(char *destination, const char *source) {
    // move to end of the first string
    while (*destination != '\0') {
        destination++;
    }

    // copy characters from source to the end of destination
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }

    // add null terminator at the end
    *destination = '\0';
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}
