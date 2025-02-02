#include <stdio.h>

int main() {
    int testcase;

    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int madu, tuker, minum;

        scanf("%d %d", &madu, &tuker);
        minum = madu;

        while (madu >= 0) {
            if (madu - tuker >= 0) {
                madu = madu - tuker + 1;
                minum++;
            } else {
                break;
            }
        }

        printf("Case #%d: %d\n", i + 1, minum);
    }
}