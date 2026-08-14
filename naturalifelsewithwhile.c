#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    if (n > 0) {
        while (i <= n) {
            sum = sum + i;
            i++;
        }
    } else {
        sum = 0;
    }

    printf("Sum = %d", sum);

    return 0;
}