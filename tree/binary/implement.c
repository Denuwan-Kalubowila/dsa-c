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
int GetMax(struct BstTree* root){
    if (root==NULL) return -1;
    else if(root->right == NULL) return root->data;
    else return GetMax(root->right);
    /*struct BstTree* current=root;
    while(current->right != NULL){
       current=current->right;
    }
    return current->data;*/


};
int GetMin(struct BstTree* root){
    if (root==NULL) return -1;
    else if(root->left == NULL) return root->data;
    else return GetMin(root->left);
    /*struct BstTree* current=root;
    while(current->left != NULL){
       current=current->left;
    }
    return current->data;*/


};
int maxH(int l,int r){
    if (l>r) return l;
    else if(l<r) return r;
    else return l;
}
int MaxHeight(struct BstTree* root){
    if (root==NULL){
        return -1;
    }
    int leftH=MaxHeight(root->left);
    int rightH=MaxHeight(root->right);

    return maxH(leftH,rightH)+1;
}


bool Search( struct BstTree* root,int data){
    if (root ==NULL) return false;
    else if (root->data == data) return true;
    else if (data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);

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
    if (Search(root,8)== true){
        printf("Correct");
    }else{
        printf("wrong");
    }

    int max=GetMax(root);
    int min=GetMin(root);
    printf("\n");
    printf("Max: %d Min: %d",max,min);
    int height=MaxHeight(root);
    printf("\n");
    printf("MaxH: %d",height);

    return 0;
}
