#include <stdio.h>

int main() {
    long long int num1, num2, sum[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%ld + %ld =", &num1, &num2);
        sum[i] = num1 + num2;
    }
    
    printf("%ld\n%ld\n%ld\n", sum[0], sum[1], sum[2]);
}