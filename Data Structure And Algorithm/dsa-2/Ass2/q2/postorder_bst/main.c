#include<stdio.h>
#include"bst.h"

int main(){
    int postorder[100], n;

    printf("Enter the number of element: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &postorder[i]);

    bst t = construct_bst(postorder, 0, n - 1);
    inorder(t);
    printf("\n");
    postorder_bst(t);
    return 0;
}
