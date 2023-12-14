#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

struct BstTree{
    int data;
    struct BstTree* left;
    struct BstTree* right;
};
struct BstTree* CreateNewNode(int data){
    struct BstTree* item =(struct BstTree*)malloc(sizeof(struct BstTree));
    item->data=data;
    item->left=NULL;
    item->right=NULL;
    return item;
}
struct BstTree* Insert( struct BstTree* root,int data){
    if(root==NULL){
        root=CreateNewNode(data);
    }else if(data <= root->data){
        root->left=Insert(root->left,data);
    }else{
        root->right=Insert(root->right,data);
    }
    return root;
}
void PreOrder(struct BstTree* root){
    if (root==NULL) return;
    printf("%d ",root->data);
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(struct BstTree* root){
    if (root==NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    printf("%d ",root->data);
}
void InnerOrder(struct BstTree* root){
    if (root==NULL) return;
    InnerOrder(root->left);
    printf("%d ",root->data);
    InnerOrder(root->right);

}

int main()
{
    struct BstTree* root=NULL;
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,25);
    root=Insert(root,12);
    root=Insert(root,8);
    PreOrder(root);
    printf("\n");
    PostOrder(root);
    printf("\n");
    InnerOrder(root);



    return 0;
}
