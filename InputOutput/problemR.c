#include <stdio.h>

int main() {
    char nama[101], nim[11];
    char kelas;
    int nomor;

    scanf("%s\n%[^\n]\n%c %d", nim, nama, &kelas, &nomor);

    printf("Id    : %s\nName  : %s\nClass : %c\nNum   : %d\n", nim, nama, kelas, nomor);
    return 0;
}