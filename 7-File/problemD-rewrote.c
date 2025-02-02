#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("testdata.in", "r");

    int t = 0;
    fscanf(file, "%d\n", &t);
    
    for (int i = 0; i < t; i++) {
        char str[1001];
        fscanf(file, "%s\n", str);

        int n = 0;
        fscanf(file, "%d\n", &n);

        int alphabet[26] = {0};

        for (int j = 0; j < n; j++) {
            char old, new;
            fscanf(file, "%c %c\n", &old, &new);

            for (int k = 0; k < strlen(str); k++) {
                if (str[k] == old) {
                    str[k] = new;
                    alphabet[new - 'A']++;
                }
            }
        }

        for (int j = 0; j < 26; j++) {
            if (alphabet[j] > 0) {
                printf("%c %d\n", j+'A', alphabet[j]);
            }
        }
    }

    fclose(file);
}