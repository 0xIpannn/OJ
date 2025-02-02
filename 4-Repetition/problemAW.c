#include <stdio.h>

int highestCount(int arr[], int len) {
    int highest = arr[0], count = 0;
    for (int i = 1; i < len; i++) {
        if (arr[i] > highest) highest = arr[i];
    }

    for (int i = 0; i < len; i++) {
        if (arr[i] == highest) count++;
    }

    return count;
}

int main() {
    int testcase;
    scanf("%d", &testcase);
    for (int i = 0; i < testcase; i++) {
        int students;
        scanf("%d", &students);
        int grades[students];

        for (int j = 0; j < students; j++) {
            scanf("%d", &grades[j]);
        }

        int gifts = highestCount(grades, students);

        printf("Case #%d: %d\n", i + 1, gifts);
    } 
}