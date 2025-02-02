#include <stdio.h>

int main() {
    char aasci1, aasci2;
    int result;

    scanf("%c %c", &aasci1, &aasci2);
    result = aasci1 * aasci2;
    printf("%d\n", result);
}