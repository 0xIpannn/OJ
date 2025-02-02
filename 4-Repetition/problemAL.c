#include <stdio.h> 

int main() {
    int b, d, bPower, dPower, bHighest = 0, dHighest = 0;
    scanf("%d %d", &b, &d);

    for (int i = 0; i < b; i++) {
        scanf("%d", &bPower);
        if (bPower > bHighest) bHighest = bPower;
    }

    for (int i = 0; i < d; i++) {
        scanf("%d", &dPower);
        if (dPower > dHighest) dHighest = dPower;
    }

    if (bHighest > dHighest) {
        printf("The dark secret was true\n");
    } else {
        printf("Secret debunked\n");
    }
}