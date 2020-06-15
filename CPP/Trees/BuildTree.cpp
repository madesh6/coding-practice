#include<iostream>
#include<stack>
#include<queue>
using namespace std;

struct node
{
	int data;
	node *left, *right;
	node(int d): data(d), left(NULL), right(NULL){};
};

node* buildTree(){
	int d;
	node* root;
	cin >> d;
	if(d == -1) return NULL;
	root = new node(d);
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

void preorderIterative(node *root){
	cout << "Preorder : ";
	if(!root) return;
	stack<node*> s;
	s.push(root);
	while(!s.empty()){
		node *temp = s.top();
		s.pop();
		cout << temp->data << " ";
		if(temp->right != NULL){
			s.push(temp->right);
		}
		if(temp->left != NULL){
			s.push(temp->left);
		}
	}
	cout << endl;
}

void inorderIterative(node* root){
	cout << "Inorder : ";
	if(!root) return;
	stack<node*> s;
	while(1){
		if(root != NULL){
			s.push(root);
			root = root->left;
		}
		else{
			if(s.empty()) break;
			root = s.top();
			s.pop();
			cout << root->data << " ";
			root = root->right;
		}
	}
	cout << endl;
}

void postorderIterative(node* root){
	cout << "Postorder : ";
	if(!root) return;
	stack<node*> s1, s2;
	s1.push(root);
	while(!s1.empty()){
		node* temp = s1.top();
		s1.pop();
		s2.push(temp);
		if(temp->left){
			s1.push(temp->left);
		}
		if(temp->right){
			s1.push(temp->right);
		}
	}
	while(!s2.empty()){
		cout << s2.top()->data << " ";
		s2.pop();
	}
	cout << endl;
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

int main(int argc, char const *argv[]){
	node *root = buildTree();
	preorderIterative(root);
	inorderIterative(root);
	postorderIterative(root);
	levelOrderOutput(root);
	return 0;
}