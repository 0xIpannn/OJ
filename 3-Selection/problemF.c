#include <stdio.h>

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z) {
        printf("Daging\n");
        if (y > z) {
            printf("Sayur\n");
            printf("Telur\n");
        } else {
            printf("Telur\n");
            printf("Sayur\n");
        }
    } else if (y > x && y > z) {
        printf("Sayur\n");
        if (x > z) {
            printf("Daging\n");
            printf("Telur\n");
        } else {
            printf("Telur\n");
            printf("Daging\n");
        }
    } else if (z > x && z > y) {
        printf("Telur\n");
        if (x > y) {
            printf("Daging\n");
            printf("Sayur\n");
        } else {
            printf("Sayur\n");
            printf("Daging\n");
        }
    }
}