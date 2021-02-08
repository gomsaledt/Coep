#include<stdio.h>
#include"bst.h"

int main(){
    bst t;
    init_bst(&t, 100);

    insert_bst(&t, 18);
    insert_bst(&t, 15);    insert_bst(&t, 30);
    insert_bst(&t, 40);
    insert_bst(&t, 26);
    insert_bst(&t, 3);    insert_bst(&t, 16);
    printf("%d\n", isComplete(t));
    recursive_traverse(t, 0);
    return 0;
}
