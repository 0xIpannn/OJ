#include <stdio.h>

int main() {
    int currentPos = 0, roll;

    scanf("%d", &roll);
    int moves;

    for (int i = 0; i < roll; i++) {
        scanf("%d", &moves);

        for (int j = 0; j < moves; j++) {
            currentPos++;
        }

        switch (currentPos) {
        case 9:
            currentPos = 21;
            break;
        case 33:
            currentPos = 42;
            break;
        case 76:
            currentPos = 92;
            break;
        case 53:
            currentPos = 37;
            break;
        case 80:
            currentPos = 59;
            break;
        case 97:
            currentPos = 88;
            break;
        default:
            break;
        }
    }

    printf("%d\n", currentPos);
}