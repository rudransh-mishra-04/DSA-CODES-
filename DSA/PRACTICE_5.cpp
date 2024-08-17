#include <iostream>
#include <queue>
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

node* binary(node* root){
	int data;
	cout<<"Enter the data for the node "<<endl;
	cin>>data;
	root=new node(data);
	
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data for the left of the "<<data<<endl;
	root->left=binary(root->left);
	cout<<"Enter the data for the right of the "<<data<<endl;
	root->right=binary(root->right);
}

void traversal(node* root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		
		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<temp->data<<" ";
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}
	}
}

int main(){
	node* root=NULL;
	root=binary(root);
	traversal(root);
	return 0;
}
