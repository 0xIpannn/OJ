#include <stdio.h>

int main() {
    int totalComment;
    double botComment, percentage;

    scanf("%d %lf", &totalComment, &botComment);

    percentage = (botComment / totalComment) * 100;

    printf("%.4lf%%\n", percentage);
}