#include <stdio.h>

int ackermann(int m, int n)
{
    if (m == 0) {
        return n + 1;
    }

    if (n == 0) {
        return ackermann(m - 1, 1);
    }

    return ackermann(m - 1, ackermann(m, n - 1));
}

int main(void)
{
    int m = 2;
    int n = 3;

    printf("Ackermann = %d\n", ackermann(m, n));
    return 0;
}
