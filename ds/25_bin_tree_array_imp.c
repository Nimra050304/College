#include <stdio.h>

#define MAX 100

void init(int t[]) {
    for(int i = 0; i < MAX; i++) t[i] = -1;
}

void insert(int t[], int idx, int val) {
    if(idx >= MAX) return;
    t[idx] = val;
}

void del(int t[], int idx) {
    if(idx >= MAX) return;
    t[idx] = -1;
}

// BFS for array tree
void levelOrder(int t[]) {
    for(int i = 0; i < MAX; i++) {
        if(t[i] != -1) printf("%d ", t[i]);
    }
    printf("\n");
}

int main() {
    int tree[MAX];
    init(tree);

    insert(tree, 0, 10);
    insert(tree, 1, 20);
    insert(tree, 2, 30);
    insert(tree, 3, 40);

    printf("Level Order: ");
    levelOrder(tree);

    del(tree, 2);

    printf("After deletion: ");
    levelOrder(tree);

    return 0;
}
