#include <stdio.h>
#include <math.h>

int main() {
    int testcase; 
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int totalSoal = 0;
        double benar = 0;
        scanf("%d", &totalSoal);
        char jawaban[totalSoal], kunciJawaban[totalSoal];

        scanf("%s", jawaban); 
        scanf("%s", kunciJawaban); 

        for (int j = 0; j < totalSoal; j++) {
            if (jawaban[j] == kunciJawaban[j]) benar++; 
        }

        double nilai = (benar / totalSoal) * 100;

        printf("Case #%d: %.0lf\n", i + 1, floor(nilai));
    }
}