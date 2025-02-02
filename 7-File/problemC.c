#include <stdio.h>

int main() {
    FILE *file = fopen("testdata.in", "r");
    int a, b;

    if (file == NULL) {
        return 0;
    }

    fscanf(file, "%d %d", &a, &b);
    printf("%d\n", a+b);
    
    fclose(file);
}