#include <stdio.h>

int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    unsigned long long int count, male, female, acquaintance;

    scanf("%d", &count); getchar();

    for (int i = 0; i < count; i++) {
        scanf("%d %d", &male, &female);
        acquaintance = male * female;
        
        if (acquaintance % 2 == 0) {
            printf("Case #%d: Party time!\n", i + 1);
        } else {
            printf("Case #%d: Need more frogs\n", i + 1);
        }
    }
}