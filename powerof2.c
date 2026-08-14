#include <stdio.h>

int main() {
    int n, power = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not a power of 2");
    }
    else {
        while (n > 1) {
            if (n % 2 != 0) {
                printf("Not a power of 2");
                return 0;
            }

            n = n / 2;
            power++;
        }

        printf("It is a power of 2");
        printf("\nPower = %d", power);
    }

    return 0;
}