#include <iostream>
#include<queue>
using namespace std;

struct BstTree {
    int data;
    BstTree* left;
    BstTree* right;
};

BstTree* CreateNewNode(int data) {
    BstTree* item = new BstTree;
    item->data = data;
    item->left = nullptr;
    item->right = nullptr;
    return item;
}

BstTree* Insert(BstTree* root, int data) {
    if (root == nullptr) {
        root = CreateNewNode(data);
    } else if (data <= root->data) {
        root->left = Insert(root->left, data);
    } else {
        root->right = Insert(root->right, data);
    }
    return root;
}

void LevelOrder(BstTree *root) {
	if(root == NULL) return;
	queue<BstTree*> Q;
	Q.push(root);

	while(!Q.empty()) {
		BstTree* current = Q.front();
		Q.pop();
		cout<<current->data<<" ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
	}
}


int main() {
    BstTree* root = nullptr;
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 12);
    root = Insert(root, 8);
    root = Insert(root, 3);

    LevelOrder(root);

    return 0;
}
