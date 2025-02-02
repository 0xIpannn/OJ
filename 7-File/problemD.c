#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) return 0;

    int t = 0;
    fscanf(file, "%d", &t);
    
    for (int i = 0; i < t; i++) {
        char str[1001];
        int alpha[26] = {0};
        fscanf(file, "%s", str);
        int size = strlen(str);

        int n = 0;
        fscanf(file, "%d", &n);

        for (int j = 0; j < n; j++) {
            char oldC, newC;
            fscanf(file, "\n%c %c", &oldC, &newC);
            for (int i = 0; i < size; i++) {
                if (str[i] == oldC) {
                    str[i] = newC;
                }
            }
        }

        for (int j = 0; j < size; j++) {
            alpha[(str[j] - 65)]++;
        }

        for (int j = 0; j < 26; j++) {
            if (alpha[j] > 0) {
                printf("%c %d\n", 65 + j, alpha[j]);
            }
        }
    }

    fclose(file);
}