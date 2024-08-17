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
		this->right-NULL;
	}
};

node* tree(node * root){
	int data;
	cout<<"Enter the data for the node "<<endl;
	cin>>data;
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter the data for the left of "<<root->data<<endl;
	root->left=tree(root->left);
	cout<<"Enter the data for the right of the "<<root->data<<endl;
	root->right=tree(root->right);
	return root;
}

void traversal(node* root){
	queue<node*>q;
	//WE ARE JUST PUSHING THE VALUE OF ROOT NODE INTO THE QUEUE
	q.push(root);
	//THIS WILL ACT AS A SEPERATOR
	q.push(NULL);
	//NOW WE WILL CHECK IS THERE IS A ROOT NODE OR NOT IF IT DOPES NOT EXIST THEN THERE IS NOT TREE CONSTUCTED
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
	root=tree(root);
	traversal(root);
	return 0;
}
