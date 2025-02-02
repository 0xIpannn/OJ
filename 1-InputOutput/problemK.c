#include <stdio.h>

int main() {
    char name[100], nis[9];
    int age;

    scanf("%[^\n]", &name);
    scanf(" %[0-9] %d", &nis, &age);

    printf("Name: %s\nNIS: %s\nAge: %d\n", name, nis, age);

    return 0;
}