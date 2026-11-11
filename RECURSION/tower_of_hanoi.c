#include <stdio.h>

void towerOfHanoi(int n, char source,
                  char auxiliary, char destination)
{
    // Base case
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n",
               source, destination);
        return;
    }

    // Step 1: Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move the largest disk to destination
    printf("Move disk %d from %c to %c\n",
           n, source, destination);

    // Step 3: Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main(void)
{
    int n = 5;

    towerOfHanoi(n, 'A', 'B', 'C');

    printf("Total moves = %d\n", (1 << n) - 1);

    return 0;
}
