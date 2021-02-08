#include <stdio.h>
#include <stdlib.h>
#include"bst.h"

bst construct_bst(int postorder[], int start, int end){
    if (start > end)
        return NULL;

    node *nn = (node*) malloc(sizeof(node));
    nn->key = postorder[end];
    nn->left = NULL;
    nn->right = NULL;

    int i;
    for (i = end; i >=start; i--)
        if (postorder[i] < nn->key)
            break;

    nn->right = construct_bst(postorder, i + 1, end - 1);
    nn->left = construct_bst(postorder, start, i);
    return nn;
}

void inorder(bst t){
    if (!t)
        return;

    inorder(t->left);
    printf("%d ", t->key);
    inorder(t->right);
    return;
}

void postorder_bst(bst t){
    if (!t)
        return;

    postorder_bst(t->left);
    postorder_bst(t->right);
    printf("%d ", t->key);
    return;
}
