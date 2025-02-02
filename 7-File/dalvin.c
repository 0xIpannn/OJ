#include <stdio.h>

int main(){
    FILE *rd = fopen("testdata.in", "r");
    int t;

    fscanf(rd, "%d\n", &t);
    while(t-- > 0){
        char x[1000];
        fscanf(rd, "%s\n", x);

        int n;
        fscanf(rd, "%d\n", &n);

        int counter[26] = {0};

        for (int i = 0; i < n; i++) {
            int idx = 0;
            char a, b;

            fscanf(rd, "%c %c\n", &a, &b);
            counter[a-65]++;

            while (x[idx] != '\0') {
                if (x[idx] == a && counter[a-65] <= 1) {
                    x[idx] = b;
                }
                idx++;
            }
        }

        int count[26] = {0};
        int idx = 0;
        while(x[idx] != '\0'){
            int index = x[idx] - 65;
            count[index]++;
            idx++;
        }
        for(int i=0; i<26; i++){
            if(count[i] > 0){
                printf("%c %d\n", i+65, count[i]);
                count[i] = 0;
            }
        }

    }
    fclose(rd);
    return 0;
}