#include <stdio.h>
#include <string.h>

struct plantData {
    char name[41];
    char plant[41];
};

int main() {
    FILE* data = fopen("testdata.in", "r");

    if (data == NULL) {
        return -1;
    }

    int t = 0;
    fscanf(data, "%d", &t);
    struct plantData dataset[t];

    for (int i = 0; i < t; i++) {
        fscanf(data, "\n%[^#]#%[^\n]", 
               dataset[i].name, 
               dataset[i].plant
              );
    }


    int s = 0;
    fscanf(data, "%d", &s);
    for (int i = 0; i < s; i++) {
        char nama[41], jenis[41];
        fscanf(data, "%s", nama);

        for (int j = 0; j < t; j++) {
            if (strcmp(nama, dataset[j].name) == 0) {
                strcpy(jenis, dataset[j].plant);
                break;
            } else {
                strcpy(jenis, "N/A");
            }
        }

        printf("Case #%d: %s\n", i + 1, jenis);
    }
}