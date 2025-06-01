#include <stdio.h>
int main() {
    int sum_even = 0, sum_odd = 0;
    for(int i = 1; i <= 10; i++) {
        if (i % 2 == 0) sum_even += i;
        else sum_odd += i;
    }
    printf("Even sum: %d, Odd sum: %d\n", sum_even, sum_odd);
    return 0;
}