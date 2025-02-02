#include <stdio.h>
#include <string.h>

int main() {
    int t;
    const int max = 100001;
    scanf("%d", &t);
    
    for (int i = 1; i <= t; i++) {
        char userName[max];
        scanf("%s", userName);
        int size = strlen(userName), distinctChar = 0;

        for (int j = 0; j < size; j++) {
            int isDistinct = 1; // assume the char is distinct
            for (int k = 0; k < j; k++) {
                if (userName[j] == userName[k]) {
                    isDistinct = 0; // klo ada char yang sama, berarti kaga distinct
                    break;
                }
            }
            if (isDistinct) distinctChar += 1;
        }

        if (distinctChar % 2 == 0) {
            printf("Case #%d: Yay\n", i);
        } else {
            printf("Case #%d: Ewwww\n", i);
        }
    }
}