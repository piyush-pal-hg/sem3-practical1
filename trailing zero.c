#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n >= 5) {
        n = n / 5;
        count = count + n;
    }

    printf("Trailing zeroes in n! = %d", count);

    return 0;
}