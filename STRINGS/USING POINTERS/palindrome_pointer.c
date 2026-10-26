#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * isPalindrome()
 * We use two pointers:
 * - `start` points to the first character
 * - `end` points to the last character
 *
 * We compare them from both ends toward the center.
 *
 * Why cast to `(unsigned char)` before calling tolower()?
 * The C standard says `tolower()` is only guaranteed to work correctly for
 * unsigned char values or the special EOF value. If a char is signed and contains
 * a negative value, it may cause undefined behavior. Casting avoids that issue.
 */
int isPalindrome(char *str) {
    char *start = str;
    char *end = str;

    while (*end != '\0') {
        end++;
    }
    end--; // move to the last actual character

    while (start < end) {
        if (tolower((unsigned char)*start) != tolower((unsigned char)*end)) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
