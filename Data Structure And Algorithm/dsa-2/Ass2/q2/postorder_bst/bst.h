//typedef struct node{
//    int key;
//    struct node *left, *right;
//}node;
//
//typedef node* bst;
//
//void init_bst(bst *t);
//void insert_bst(bst *t, int d); //non-recursive insert
//void inorder(bst t); // inorder
//
typedef struct node
{
    int key;
    struct node *left, *right;
}node;

typedef node* bst;

bst construct_bst(int postorder[], int start, int end);
void inorder(bst t);
void postorder_bst(bst t);
