#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 100
#define MAX_NAME_LENGTH 41
#define MAX_TREE_LENGTH 41

typedef struct {
    char friendName[MAX_NAME_LENGTH];
    char treeName[MAX_TREE_LENGTH];
} Record;

int main() {
    FILE *file = fopen("testdata.in", "r");
    if (file == NULL) {
        return 1;
    }

    int N;
    fscanf(file, "%d\n", &N);
    Record records[MAX_RECORDS];

    for (int i = 0; i < N; i++) {
        fscanf(file, "%[^#]#%[^\n]\n", records[i].friendName, records[i].treeName);
    }

    int T;
    fscanf(file, "%d", &T);
    for (int i = 0; i < T; i++) {
        char searchName[MAX_NAME_LENGTH];
        fscanf(file, "\n%s", searchName);

        int found = 0;
        for (int j = 0; j < N; j++) {
            if (strcmp(records[j].friendName, searchName) == 0) {
                printf("Case #%d: %s\n", i + 1, records[j].treeName);
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("Case #%d: N/A\n", i + 1);
        }
    }

    fclose(file);
    return 0;
}