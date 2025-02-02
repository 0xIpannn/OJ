#include <stdio.h>

void codeify(char c[], int len, int k) {
    for (int i = 0; i < len; i++) {
        int temp = c[i] - 97;
        temp += k;
        while (temp > 25) {
            temp -= 26;
        }
        printf("%c", temp + 97);
    } 
}

int main() {
    int cases;
    scanf("%d", &cases);

    for (int i = 0; i < cases; i++) {
        int a, k;
        scanf("%d %d", &a, &k);
        char str[a+1];
        scanf("%s", str);

        printf("Case #%d: ", i + 1);
        codeify(str, a, k);
        printf("\n");
    }
}