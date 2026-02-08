#include <stdio.h>

int factorial(int n) {
    if (n <= 1) return 1; 
    return n * factorial(n - 1); 
}

void displayResult(int num) {
    printf("Factorial of %d is %d\n", num, factorial(num));
}

int main() {
    displayResult(5); 
    displayResult(3);
    return 0;
}