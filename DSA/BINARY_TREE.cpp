#include <iostream>
using namespace std;

//THIS IS FOR THE INITILIZATION OF THE NODE IN A TREE
class node{
	public:
		int data;
		node* left;
		node* right;
		//called a constructer
	node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}
};
//NOW WE ARE CREATING A FUNCTION IN WHICH WE ARE ASSIGNING THE NODES 
node* build_tree(node * root){
	cout<<"Enter the data for the node "<<endl;
	//THIS LINE DECLARES THE INTEGER AND STORES THE DATA FOR IT
	int data;
	cin>>data;
	root=new node(data);
	
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data for insering in the left "<<data<<endl;
	root->left=build_tree(root->left);
	cout<<"Enter the data for inserting in the right "<<data<<endl;
	root->right=build_tree(root->right);
	return root;
}

int main(){
	node* root =NULL;
	//THIS IS CREATING THE TREE
	root=build_tree(root);
	return 0;
}
