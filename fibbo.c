#include <stdio.h>
// Function to calculate Fibonacci number using recursion
int fibonacci(int n) {
if (n == 0) {
return 0;
} else if (n == 1) {
return 1;
} else {
return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}
}
int main() {
int n = 10; // Find the 10th Fibonacci number
printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
return 0;
}
