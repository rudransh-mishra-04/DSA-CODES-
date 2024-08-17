#include <iostream>
using namespace std;

//creating a class 
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

//node creating a pointer 
node* build(node* root){
	cout<<"Enter the data for the node "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data for the left node "<<data<<endl;
	root->left=build(root->left);
	cout<<"Enter the data for the right node "<<data<<endl;
	root->right=build(root->right);
	return root;
}

void level_order_traversal()
int main(){
	//we have created an object name as root which is pointing to the node 
	node* root=NULL;
	
	root=build(root);
	return 0;
}
