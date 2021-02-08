#include<stdlib.h>
#include<stdio.h>
#include"bst.h"

void init_bst(bst *t, int size){
    t->arr = (int*) calloc(size * sizeof(int), sizeof(int));
    t->size = 0;
    t->zero = -1;
    return;
}

void insert_bst(bst *t, int d){     // non-recursive insert
    if(!t->size){
        t->arr[0] = d;
        t->size++;
        if(!d)
            t->zero = 0;
        return;
    }
    int i = 0;
    while(t->arr[i] || i == t->zero){
        if(t->arr[i] < d)
            i = 2 * i + 2;
        else if(t->arr[i] > d)
            i = 2 * i + 1;
        else
            return;
    }
    if(!d)
        t->zero = i;
    t->arr[i] = d;
    t->size++;
    return;
}

void recursive_traverse(bst t, int i){     // inorder, preorder, postorder
    if(t.zero != i && !t.arr[i])
        return;
    recursive_traverse(t, 2 * i + 1);
    printf("%d ", t.arr[i]);
    recursive_traverse(t, 2 * i + 2);
    return;
}

int isComplete(bst t) {   // Check whether the BST is a complete tree
    if(!t.size)
        return 1;

    for(int i = 0; i < t.size; i++)
        if(t.zero != i && !t.arr[i])
            return 0;

    return 1;
}

