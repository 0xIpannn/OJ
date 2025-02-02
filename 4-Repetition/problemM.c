#include <stdio.h>

int main() {
    int testcase;

    scanf("%d", &testcase);

    for (int i = 0; i < testcase; i++) {
        int orders = 0, totalPrice = 0, money = 0;
        scanf("%d %d", &orders, &money);

        for (int j = 0; j < orders; j++) {
            int price;
            scanf("%d", &price);
            totalPrice += price;
        }

        if (totalPrice <= money) {
            printf("Case #%d: No worries\n", i + 1);
        } else {
            printf("Case #%d: Wash dishes\n", i + 1);
        }        
    }
}