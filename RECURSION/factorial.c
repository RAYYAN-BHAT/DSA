#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(void)
{
    unsigned int n;

    printf("Enter a non-negative integer (0-20): ");
    scanf("%u", &n);

    printf("%u! = %llu\n", n, factorial(n));
    return 0;
}
