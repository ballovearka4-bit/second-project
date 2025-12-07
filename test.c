#include <stdio.h>
#include <assert.h>

// Declare the function from main.c
int sum(int a, int b);

void test_sum() {
    printf("Running sum() tests...\n");

    assert(sum(2, 3) == 5);
    assert(sum(10, 20) == 30);
    assert(sum(-5, 5) == 0);
    assert(sum(100, 200) == 300);

    printf("All tests passed successfully!\n");
}

int main() {
    test_sum();
    return 0;
}
