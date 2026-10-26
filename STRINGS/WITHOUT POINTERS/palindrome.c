#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrome(char str[],int length)
{
    int left = 0;
    int right = length - 1;
    int i = 0;
    while(str[i] != '\0')
    {
        str[i] = tolower(str[i]);
        i++;
    }
    while(right>left)
    {
        if(str[left] != str[right])
        return 0;
        left ++;
        right --;
    }
    return 1;
}
int main(void) {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

   if(palindrome(str,strlen(str)) == 1 ) printf("Palindrome");
   else printf("NOt palindrome");

    return 0;
}
