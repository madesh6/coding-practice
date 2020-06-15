#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left, *right;
	node(int d): data(d), left(NULL), right(NULL){};
};

node* insertIntoBST(node* root, int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}
	if(data <= root->data){
		root->left = insertIntoBST(root->left, data);
	}
	else{
		root->right = insertIntoBST(root->right, data);
	}
	return root;
}

node* buildBST(){
	node *root = NULL;
	int d;
	cin >> d;
	while(d != -1){
		root = insertIntoBST(root, d);
		cin >> d;
	}
	return root;
}
// inorder traversal of BST gives elements in ascending order.
void inorderRecursive(node *root){
	if(!root) return;
	inorderRecursive(root->left);
	cout << root->data << " ";
	inorderRecursive(root->right);
}

int main(int argc, char const *argv[])
{
	node *root = buildBST();
	inorderRecursive(root);
	return 0;
}