#include <stdio.h>

int main(){
    int N, sum;
    scanf("%d", &N);
    sum = 0;
    for (int i = 0; i < N; i++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (c >= a && c < b){
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}