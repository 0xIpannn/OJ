#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertNum(char* str, int size) {
    for (int i = 0; i < size; i++) {
        if (isdigit(str[i])) {
            switch (str[i]) {
            case '0':
                str[i] = 'O';
                break;
            case '1':
                str[i] = 'I';
                break;
            case '3':
                str[i] = 'E';
                break;
            case '4':
                str[i] = 'A';
                break;
            case '5':
                str[i] = 'S';
                break;
            case '6':
                str[i] = 'G';
                break;
            case '7':
                str[i] = 'T';
                break;
            case '8':
                str[i] = 'B';
                break;
            }
        }
    }
}

void decrypt(char* str, int size, int shift) {
    for (int i = 0; i < size; i++) {
        if (str[i] == ' ') continue;
        str[i] -= shift;
        if (str[i] < 'A') str[i] += 26;
    }
}

int main() {
    FILE* file = fopen("testdata.in", "r");

    if (file == NULL) {
        return -1;
    }

    int t = 0;
    fscanf(file, "%d", &t);
    
    for (int i = 0; i < t; i++) {
        int shift;
        char str[1001];

        fscanf(file, "%d %[^\n]", &shift, str);

        convertNum(str, strlen(str));
        decrypt(str, strlen(str), shift);
        printf("Case #%d: %s\n", i+1, str);
    }

    fclose(file);
    return 0;
}