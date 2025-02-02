#include <stdio.h>

void intToBinary(int num, int binaryNum[]) {
    for (int j = 0; j < 32; j++) {
        binaryNum[j] = 0;
    }
    int i = 0;
    while (num > 0) {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
}

int main() {
    int testcase;
    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int pos, binaryNum[32];
        long long int num;
        scanf("%lld %d", &num, &pos);

        intToBinary(num, binaryNum);
        printf("%d\n", binaryNum[pos]);
    }
}