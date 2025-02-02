#include <stdio.h>

int main() {
    int testCase, rounds;
    scanf("%d", &testCase); getchar();

    for (int i = 0; i < testCase; i++) {
        int scoreBibi = 0, scoreLili = 0;
        scanf("%d", &rounds); getchar();
        
        char score[rounds + 1];
        scanf("%s", score);

        for (int j = 0; j < rounds; j++) {
            if (score[j] == 'L') {
                scoreLili++;
            } else if (score[j] == 'B') {
                scoreBibi++;
            }
        }

        if (scoreBibi > scoreLili) {
            printf("Bibi\n");
        } else if (scoreLili > scoreBibi) {
            printf("Lili\n");
        } else {
            printf("None\n");
        }
    }
    
}