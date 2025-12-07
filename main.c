#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x = 10, y = 20;
    printf("Sum = %d\n", sum(x, y));
    return 0;
}
