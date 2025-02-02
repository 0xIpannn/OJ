#include <stdio.h>
#include <string.h> 

void replaceLetter(char* str, char before, char after) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == before) {
            str[i] = after;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char str[1001];
        int m;
        scanf("%s", str); getchar();
        scanf("%d", &m); getchar();

        for (int j = 0; j < m; j++) {
            char before, after;
            scanf("%c %c", &before, &after); getchar();
            replaceLetter(str, before, after);
        }

        printf("Case #%d: %s\n", i+1, str);
    }
}