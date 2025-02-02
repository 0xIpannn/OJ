#include <stdio.h>

int main() {
    long long int num1, num2, result[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%ld %ld", &num1, &num2);
        result[i] = num1 * num2;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%ld\n", result[i]);
    }
    
}