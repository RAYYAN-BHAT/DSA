#include <stdio.h>
#include <string.h>

/*
 * length()
 * We use a pointer `p` to walk through the string one character at a time.
 * The parameter is `const char *str` because the function only reads the string;
 * it never changes the characters inside it.
 *
 * Why do we write (int)(p - str)?
 * Pointer subtraction gives the number of elements between two pointers.
 * Here, `p` is at the end of the string and `str` is at the start, so
 * `p - str` gives the length. Pointer difference gives us a special format called ptrdiff_t. So we cast it to int
 */
int length(const char *str) {
    const char *p = str; // pointer to current character

    while (*p != '\0') {
        p++; // move to the next char until we reach the end
    }

    return (int)(p - str); // number of characters from start to end
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Length of the string: %d\n", length(str));
    return 0;
}
