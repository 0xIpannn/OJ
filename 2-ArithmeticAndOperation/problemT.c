#include <stdio.h>

int main() {
    char Course_code[5][11];
    int h1[5], m1[5], h2[5], m2[5];

    for (int i = 0; i < 5; i++)
    {   
        scanf("%s %02d:%02d-%02d:%02d", Course_code[i], &h1[i], &m1[i], &h2[i], &m2[i]);
        
        h1[i] -= 1;
        h2[i] -= 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s %02d:%02d-%02d:%02d\n", Course_code[i], h1[i], m1[i], h2[i], m2[i]);
    }
}