#include <stdio.h>

int first(char a, char b, char c) { // cek variable yg mana yg urutannya pertama
    if (a < b && a < c) {
        return 1;
    } else if (b < a && b < c) {
        return 2;
    } else if (c < a && c < b) {
        return 3;
    }
}

int second(char a, char b, char c) { // cek variable yg mana yg urutannya kedua
    if ((b > a && a > c) || (b < a && a < c)) { 
        return 1;
    } else if ((a > b && b > c) || (a < b && b < c)) {
        return 2;
    } else if ((b > c && c > a) || (b < c && c < a)) {
        return 3;
    }
}

int third(char a, char b, char c) { // cek variable yg mana yg urutannya ketiga
    if (a > b && a > c) {
        return 1;
    } else if (b > a && b > c) {
        return 2;
    } else if (c > a && c > b) {
        return 3;
    }
}

int main() {
    char x, y, z;

    scanf("%c %c %c", &x, &y, &z);
    printf("%d %d %d\n", first(x, y, z), second(x, y, z), third(x, y, z));
}