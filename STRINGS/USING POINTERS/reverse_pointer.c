#include <stdio.h>
#include <string.h>

/*
 * reverseString()
 * We use two pointers:
 * - `start` begins at the first character
 * - `end` moves to the last character
 *
 * Why do we do `end--` after the loop?
 * Because the loop stops when `end` points to the terminating '\0', not the last
 * actual character. To swap characters properly, we move `end` one step back so it
 * points to the last real character. Then we swap until `start` and `end` meet.
 */
void reverseString(char *str) {
    char *start = str;
    char *end = str;

    while (*end != '\0') {
        end++;
    }

    if (end > start) {
        end--; // move to the last real character
    }

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
