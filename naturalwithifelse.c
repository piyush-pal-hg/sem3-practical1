#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter N: ");
    scanf("%d", &n);

    if (n > 0)
        sum = n * (n + 1) / 2;
    else
        sum = 0;

    printf("Sum = %d", sum);

    return 0;
}