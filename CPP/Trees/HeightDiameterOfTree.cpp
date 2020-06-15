#include<iostream>
using namespace std;

struct node
{
	int data;
	node *left, *right;
	node(int d): data(d), left(NULL), right(NULL){};
};

node* buildTree(){
	int d;
	cin >> d;
	if(d == -1) return NULL;
	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void preorderRecursive(node *root){
	if(!root) return;
	cout << root->data << " ";
	preorderRecursive(root->left);
	preorderRecursive(root->right);
}
// heightOfNode = max(heightOfLeftSubTree, heightOfRightSubTree) + 1;
int heightOfTree(node* root){
	if(root == NULL) return 0;
	int leftHeight = heightOfTree(root->left);
	int rightHeight = heightOfTree(root->right);
	return max(leftHeight, rightHeight) + 1;
}

// Diameter of tree
int diameterOfTree(node* root){
	if(root == NULL) return 0;
	int d1 = heightOfTree(root->left) + heightOfTree(root->right);
	int d2 = diameterOfTree(root->left);
	int d3 = diameterOfTree(root->right);
	return max(d1, max(d2, d3));
}

class Pair{
public:
	int height, diameter;
};

Pair fastDiameter(node* root){
	Pair p;
	if(root == NULL){
		p.height = p.diameter = 0;
		return p;
	}
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);
	p.height = max(left.height, right.height) + 1;
	int d1 = left.height + right.diameter;
	int d2 = left.diameter;
	int d3 = right.diameter;
	p.diameter = max(d1, max(d2, d3));
	return p;
}

int main(int argc, char const *argv[])
{
	node *root = buildTree();
	preorderRecursive(root);
	cout << endl;
	cout << "heightOfTree : " << heightOfTree(root) << endl;
	cout << "diameterOfTree : " << diameterOfTree(root) << endl;
	cout << "fastDiameter : " << fastDiameter(root).diameter << endl;
	return 0;
}