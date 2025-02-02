#include <stdio.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int len = 0, index = 0;
        scanf("%d", &len); getchar();

        char str[len + 1];
        scanf("%[^\n]", str); getchar();

        printf("Case #%d: ", i + 1);
        for (int j= 0; j < len; j++) {
            if (str[j] >= 'a' && str[j] <= 'z') {
                printf("%c", str[j]);
            }
        }
        printf("\n");
    }
}
