#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

node * build_tree(node* root){
	cout<<"Enter the data for the node "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data for the left node of "<<data<<endl;
	root->left=build_tree(root->left);
	cout<<"Enter the data for the right node of "<<data<<endl;
	root->right=build_tree(root->right);
}
int main(){
	node * root=NULL;
	root=build_tree(root);
	return 0;
}
