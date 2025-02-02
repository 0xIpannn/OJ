#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n = 0, maxBreath = 0;
        scanf("%d %d", &n, &maxBreath);
        int tiles[n], breath = maxBreath;

        // input tiles
        for (int j = 0; j < n; j++) scanf("%d", &tiles[j]);

        int onSecondFloor = 0;
        for (int j = 0; j < n; j++) {
            if (tiles[j] == 0) {
                if (onSecondFloor == 0) breath--;
            } else if (tiles[j] == 1) {
                if (onSecondFloor == 0) {
                    breath--;
                    onSecondFloor = 1; // naek lantai 2
                } else {
                    breath = maxBreath; // refill breath
                    onSecondFloor = 0; // turun lantai 1
                }
            }
        }

        if (breath > 0) {
            printf("Case #%d: Alive\n", i + 1);
        } else {
            printf("Case #%d: Dead\n", i + 1);
        }
    }
}