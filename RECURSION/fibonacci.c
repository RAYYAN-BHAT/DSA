#include <stdio.h>

long long fibonacci(int position)
{
    if (position == 0) {
        return 0;
    }

    if (position == 1) {
        return 1;
    }

    long long previous_number = fibonacci(position - 1);
    long long number_before_previous = fibonacci(position - 2);

    return previous_number + number_before_previous;
}

int main(void)
{
    int position;

    printf("Enter the position: ");
    scanf("%d", &position);

    printf("Fibonacci number at position %d = %lld\n",
           position, fibonacci(position));
    return 0;
}
