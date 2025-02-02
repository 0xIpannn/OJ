#include <stdio.h>

int main() {
    int N;
    long long int totalPoint = 0;
    long long int bonusPoint = 0;
    
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        totalPoint += 100 + bonusPoint;
        bonusPoint += 50;
    }

    printf("%ld\n", totalPoint);
}