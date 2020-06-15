#include<iostream>
#include<queue>
using namespace std;

struct node{
	int data, height;
	node *left, *right;
	node(int d): data(d), left(NULL), right(NULL), height(1){}
};

int height(node* root){
	if(root == NULL)
		return 0;
	return root->height;
}

int getBalance(node* root){
	if(root == NULL)
		return 0;
	return height(root->left) - height(root->right);
}

node* leftRotate(node* x){
	node* y = x->right;
	node* T2 = y->left;

	y->left = x;
	x->right = T2;
	
	x->height = 1 + max(height(x->left), height(x->right));
	y->height = 1 + max(height(y->left), height(y->right));
	
	return y;
}

node* rightRotate(node* y){
	node* x = y->left;
	node* T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = 1 + max(height(y->left), height(y->right));
	x->height = 1 + max(height(x->left), height(x->right));

	return x;
}

node* insertIntoAVL(node* root, int data){
	if(root == NULL){
		root = new node(data);
		return root;
	}
	if(data < root->data){
		root->left = insertIntoAVL(root->left, data);
	}
	else if(data > root->data){
		root->right = insertIntoAVL(root->right, data);
	}
	else
		return root;
	root->height = 1 + max(height(root->left), height(root->right));
	int balance = getBalance(root);
	
	// 1. Left Left
	if(balance > 1 && data < root->left->data){
		return rightRotate(root);
	}
	// 2. Right Right
	if(balance < -1 && data > root->right->data){
		return leftRotate(root);
	}
	// 3. Left Right
	if(balance > 1 && data > root->left->data){
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}
	// 4. Right Left
	if(balance < -1 && data < root->right->data){
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}
	return root;
}

void levelOrderOutput(node* root);

node* buildAVLtree(){
	node* root = NULL;
	int d;
	cin >> d;
	while(d != -1){
		root = insertIntoAVL(root, d);
		levelOrderOutput(root);
		cin >> d;
	}
	return root;
}

void levelOrderOutput(node* root){
	cout << "levelOrderOutput : " << endl;
	if(root == NULL) return;
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		if(temp == NULL){
			cout << endl;
			if(!q.empty())
				q.push(NULL);
		}
		else{
			cout << temp->data << " ";
			if(temp->left)
				q.push(temp->left);
			if(temp->right)
				q.push(temp->right);
		}
	}
}

int main(int argc, char const *argv[])
{
	node *root = buildAVLtree();
	//levelOrderOutput(root);
	return 0;
}