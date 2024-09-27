#include <stdio.h>

int main() {
    char n1[100], n2[100];
    int u1, u2;
    float t1, t2;

    scanf("%s %f %d %s %f %d", &n1, &t1, &u1, &n2, &t2, &u2);

    if(u1 > 100) u1 = 100;
    if(u2 > 100) u2 = 100;
    if(t1 > 300.00) t1 = 300.00;
    if(t2 > 300.00) t2 = 300.00;

    printf("Name 1: %s\nHeight 1: %.2f\nAge 1: %d\n", n1, t1, u1);
    printf("Name 2: %s\nHeight 2: %.2f\nAge 2: %d\n", n2, t2, u2);

    return 0;
}