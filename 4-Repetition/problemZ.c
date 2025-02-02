#include <stdio.h>

int main() {
    int currentPos = 0, roll;

    scanf("%d", &roll);
    int moves[roll];

    for (int i = 0; i < roll; i++) {
        scanf("%d", &moves[i]);
    }

    for (int i = 0; i < roll; i++) {
        for (int j = 0; j < moves[i]; j++) {
            currentPos++;
            if (currentPos == 40) {
                currentPos = 0;
            }
        }

        switch (currentPos) {
        case 12:
            currentPos = 28;
            break;
        case 30:
            currentPos = 10;
            break;
        case 35:
            currentPos = 7;
            break;
        default:
            break;
        }
    }

    printf("%d\n", currentPos);
}