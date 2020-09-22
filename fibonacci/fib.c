#include <stdio.h>

void fib(int array[], int n) {
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i < n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
}

int main() {
    const int SIZE = 16;
    int fib_arr[SIZE];
    fib(fib_arr, SIZE); // Fill array
    for (int i = 0; i < SIZE; i++) // Display contents
        printf("%d ", fib_arr[i]);
    return 0;
}