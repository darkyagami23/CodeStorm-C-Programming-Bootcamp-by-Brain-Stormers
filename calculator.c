#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\nProduct: %d\nAverage: %.2f\n", a + b, a * b, (a + b) / 2.0);
    return 0;
}