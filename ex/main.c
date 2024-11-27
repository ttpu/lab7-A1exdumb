#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) { // Base case: 0! = 1 and 1! = 1
        return 1;
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int n;

    // Input: Read a non-negative integer
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Validate input (ensure n is within the range)
    if (n < 0 || n > 12) {
        printf("Error: Input must be between 0 and 12.\n");
        return 1;
    }
    int result = factorial(n);
    printf("%d! = %d\n", n, result);
    return 0;
}