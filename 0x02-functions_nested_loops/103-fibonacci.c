#include <stdio.h>

int main() {
    int limit = 4000000;
    int sum = 0;
    int previous = 1;
    int current = 2;

    while (current <= limit) {
        if (current % 2 == 0) {
            sum += current;
        }

        int next = previous + current;
        previous = current;
        current = next;
    }

    printf("%d\n", sum);

    return 0;
}

