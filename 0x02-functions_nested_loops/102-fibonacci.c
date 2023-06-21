#include <stdio.h>

void print_fibonacci(int n) {
    int fib[n];
    int i;

    // First two numbers are 1 and 2
    fib[0] = 1;
    fib[1] = 2;

    // Generate Fibonacci sequence
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci sequence
    for (i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int n = 50;
    print_fibonacci(n);
    return 0;
}

