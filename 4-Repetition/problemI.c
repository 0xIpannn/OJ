#include <stdio.h>

int main() {
    int participants, jojo, lili, bibi, num, sum, mean;
    scanf("%d", &participants);
    scanf("%d %d %d", &jojo, &lili, &bibi);
    sum += jojo + lili + bibi;
    for (int i = 0; i < participants; i++) {
        scanf("%d", &num);
        sum += num;
    }

    mean = sum / (participants + 3);

    char *jojoState = (jojo >= mean) ? "Jojo lolos\n" : "Jojo tidak lolos\n";
    char *liliState = (lili >= mean) ? "Lili lolos\n" : "Lili tidak lolos\n";
    char *bibiState = (bibi >= mean) ? "Bibi lolos\n" : "Bibi tidak lolos\n";

    printf("%s", jojoState);
    printf("%s", liliState);
    printf("%s", bibiState);
}