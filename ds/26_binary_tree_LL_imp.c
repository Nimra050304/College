#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* newNode(int v) {
    struct node* t = malloc(sizeof(*t));
    t->data = v;
    t->left = t->right = NULL;
    return t;
}

// Level-order insertion (generic binary tree)
struct node* insert(struct node* r, int v) {
    if(!r) return newNode(v);

    struct node* q[100];
    int f = 0, b = 0;
    q[b++] = r;

    while(f < b) {
        struct node *cur = q[f++];

        if(!cur->left) { cur->left = newNode(v); break; }
        else q[b++] = cur->left;

        if(!cur->right) { cur->right = newNode(v); break; }
        else q[b++] = cur->right;
    }
    return r;
}

void delDeep(struct node* r, struct node* d) {
    struct node* q[100];
    int f = 0, b = 0;

    q[b++] = r;

    while(f < b) {
        struct node* cur = q[f++];

        if(cur->left) {
            if(cur->left == d) { cur->left = NULL; free(d); return; }
            q[b++] = cur->left;
        }
        if(cur->right) {
            if(cur->right == d) { cur->right = NULL; free(d); return; }
            q[b++] = cur->right;
        }
    }
}

struct node* del(struct node* r, int key) {
    if(!r) return r;

    struct node *q[100], *temp, *keynode = NULL;
    int f = 0, b = 0;

    q[b++] = r;

    while(f < b) {
        temp = q[f++];

        if(temp->data == key) keynode = temp;

        if(temp->left) q[b++] = temp->left;
        if(temp->right) q[b++] = temp->right;
    }

    if(keynode) {
        int x = temp->data;
        delDeep(r, temp);
        keynode->data = x;
    }
    return r;
}

void inorder(struct node* r) {
    if(!r) return;
    inorder(r->left);
    printf("%d ", r->data);
    inorder(r->right);
}

void preorder(struct node* r) {
    if(!r) return;
    printf("%d ", r->data);
    preorder(r->left);
    preorder(r->right);
}

void postorder(struct node* r) {
    if(!r) return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ", r->data);
}

void level(struct node* r) {
    if(!r) return;

    struct node* q[100];
    int f = 0, b = 0;

    q[b++] = r;

    while(f < b) {
        struct node *cur = q[f++];
        printf("%d ", cur->data);

        if(cur->left) q[b++] = cur->left;
        if(cur->right) q[b++] = cur->right;
    }
}

int main() {
    struct node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);

    printf("Inorder: "); inorder(root); printf("\n");
    printf("Preorder: "); preorder(root); printf("\n");
    printf("Postorder: "); postorder(root); printf("\n");
    printf("Level: "); level(root); printf("\n");

    root = del(root, 20);

    printf("After deletion (level): ");
    level(root);

    return 0;
}
