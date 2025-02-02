#include <stdio.h>

int main() {
    int assignment, mid, final;
    float score;

    scanf("%d %d %d", &assignment, &mid, &final);

    score = 0.2*assignment + 0.3*mid + 0.5*final;

    printf("%.2f\n", score);
}