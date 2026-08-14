#include <stdio.h>

int main() {
    int n, N;
    long long fact = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter N: ");
    scanf("%d", &N);

    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % N;
    }

    printf("%d! mod %d = %lld", n, N, fact);

    return 0;
}