
void postorder(struct node* root)
{
    if (root == NULL)
        return;

    struct node* s1[100];
    struct node* s2[100];
    int t1 = -1, t2 = -1;

    s1[++t1] = root;

    while (t1 != -1)
    {
        root = s1[t1--];
        s2[++t2] = root;

        if (root->left)
            s1[++t1] = root->left;
        if (root->right)
            s1[++t1] = root->right;
    }

    while (t2 != -1)
        printf("%d ", s2[t2--]->data);
}
