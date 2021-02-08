typedef struct bst{
    int *arr;
    int size;
    int zero;
}bst;

void init_bst(bst *t, int size);
void insert_bst(bst *t, int d);     // non-recursive insert
void recursive_traverse(bst t, int i);     // inorder, preorder, postorder
int isComplete(bst t);      // Check whether the BST is a complete tree

