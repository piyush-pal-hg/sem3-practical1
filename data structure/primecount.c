#include <stdio.h>
int main() {
    int arr[10], count = 0;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        int prime = 1;
        if (arr[i] < 2) {
            prime = 0;
        }
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 1) {
            count++;
        }
    }
    printf("Number of prime elements = %d", count);
    return 0;
}