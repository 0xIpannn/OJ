#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char msg[1000];
        scanf("%s", msg);
        int size = strlen(msg);
        char encrypted[size + 1];
        int shift[size + 1];

        // encrypt message nya
        for (int j = 0; j < size; j++) {
            switch(msg[j]) {
                case 'A' ... 'D':
                    encrypted[j] = 'A';
                    break;
                case 'E' ... 'H':
                    encrypted[j] = 'E';
                    break;
                case 'I' ... 'N':
                    encrypted[j] = 'I';
                    break;
                case 'O' ... 'T':
                    encrypted[j] = 'O';
                    break;
                case 'U' ... 'Z':
                    encrypted[j] = 'U';
                    break;
                default:
                    encrypted[j] = msg[j];
                    break;
            }
        }

        for (int j = 0; j < size; j++) {
            shift[j] = msg[j] - encrypted[j];
        }

        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < size; j++) printf("%c", encrypted[j]); printf("\n");
        for (int j = 0; j < size; j++) printf("%d", shift[j]); printf("\n");
    }
}