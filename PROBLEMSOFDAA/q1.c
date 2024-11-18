#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum = sumArray(arr, 5);
    printf("Sum: %d\n", sum);
    return 0;
}
