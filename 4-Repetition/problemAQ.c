#include <stdio.h>
#include <ctype.h>

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        char s[101];
        int validDot = 0;
        scanf("%s", s);
        for (int j = 0; j < 101; j++) {
            if (s[j] == '.' && isdigit(s[j+1]) && isdigit(s[j-1])) {
                validDot++;
            }
        }

        if (validDot == 5) {
            printf("Case #%d: YES\n", i + 1);
        } else {
            printf("Case #%d: NO\n", i + 1);
        }
    }
}