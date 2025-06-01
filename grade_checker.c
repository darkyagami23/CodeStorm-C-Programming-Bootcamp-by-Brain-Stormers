#include <stdio.h>
int main() {
    int score;
    printf("Enter score: ");
    scanf("%d", &score);
    if (score >= 90) printf("Grade: A\n");
    else if (score >= 80) printf("Grade: B\n");
    else printf("Grade: C or below\n");
    return 0;
}