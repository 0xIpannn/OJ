#include <stdio.h>

int main() {
    int test, count, num;

    scanf("%d", &test);
    for(int i = 0; i < test; i++) {
        int oddCount = 0, evenCount = 0;
        scanf("%d", &count);
        for(int j = 0; j < count; j++) {
            scanf("%d", &num);
            if (num % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        printf("Odd group : %d integer(s).\n", oddCount);
        printf("Even group : %d integer(s).\n", evenCount);
        printf("\n");
    } 
}