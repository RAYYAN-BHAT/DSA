#include <stdio.h>

int sum_of_digits(int number)
{
    if (number == 0) {
        return 0;
    }

    int last_digit = number % 10;
    int remaining_number = number / 10;

    return last_digit + sum_of_digits(remaining_number);
}

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits = %d\n", sum_of_digits(number));
    return 0;
}
