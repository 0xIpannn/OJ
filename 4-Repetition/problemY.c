#include <stdio.h>

int main() {
    int testCase, p, l;

    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++) {
        scanf("%d %d", &p, &l);
        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < l; k++) {

                if ((k > 0 && k < (l - 1)) && (j != 0 && j != (p - 1))) {
                    printf(" ");
                } else {
                    printf("#");
                }
                
                if (k == (l-1)) {printf("\n");}
            }
            
        }
    }
}