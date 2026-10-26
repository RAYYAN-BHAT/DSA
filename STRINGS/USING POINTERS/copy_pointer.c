#include <stdio.h>
#include <string.h>

/*
 * copy()
 * `source` is declared as `const char *` because we only read from it.
 * `destination` is not const because we are writing into it.
 *
 * The expression `*destination = *source` does two things at once:
 * 1. Reads the current character from the source.
 * 2. Writes that character into the destination.
 *
 * The loop stops when the current character is '\0'. That means the null
 * terminator is also copied, which is important so the copied string is valid.
 */
void copy(const char *source, char *destination) {
    while ((*destination = *source) != '\0') {
        source++;
        destination++;
    }
}

int main() {
    char str[100];
    char copied[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    copy(str, copied);
    printf("Copied string: %s\n", copied);

    return 0;
}
