#include <stdio.h>
int main() {
    int day;
    printf("Enter day (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        default: printf("Other day\n");
    }
    return 0;
}