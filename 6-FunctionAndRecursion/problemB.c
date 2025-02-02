#include <stdio.h>

int traverse(int *array, int size, int index, int val) {
    if ((index - 1) > size) {
        printf("%d ", val);
        return 0;
    }

    int leftBranch = val + array[(2 * index) - 1];
    traverse(array, size, 2 * index, leftBranch);

    int rightbranch = val + array[(2 * index + 1) - 1];
    traverse(array, size, 2 * index + 1, rightbranch);

    return 0;
}

int main() {
    int t = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        int n = 0;
        scanf("%d", &n);
        int tree[n] = {};
        for (int j = 0; j < n; j++) scanf("%d", tree[j]);
        traverse(tree, n, 1, tree[0]);
    }
}