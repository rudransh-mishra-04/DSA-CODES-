#include <iostream>
#include <queue>
using namespace std;

//THIS IS FOR CREATING A NEW NODE 
class node{
	public:
		int data;
		node* left;
		node * right;
	node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};

//NOW WE HAVE TO CREATE A FUNCTION THROUGH WHICH WE CAN CREATE A TREE
node * build_tree(node* root){
	cout<<"enter the data for the node "<<endl;
	int data;
	cin>>data;
	//now we have created a new root node in which we are filling the data 
	root=new node(data);
	if(data==-1){
		return NULL;
	}
	cout<<"Enter data for the left "<<data<<endl;
	root->left=build_tree(root->left);
	cout<<"Enter the data for right "<<data<<endl;
	root->right=build_tree(root->right);
	return root;
}

//THIS IS FOR LEVEL ORDER TRAVERSAL

void level_order_traversal(node *root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		node * temp=q.front();
		q.pop();
		
		if(temp==NULL){
			//THE LEVEL IS NOW COMPLETE 
			cout<<endl;
			//THE QUEUE STILL HASE SOME CHILD NODES
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

//THIS IS FOR INORDER TRAVERSAL 

void inorder(node *root){
	//BASE CASE
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

//THIS IS FOR PRE ORDER TRAVERSAL
void preorder(node *root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
//THIS IS FOR POST ORDER TRAVESAL
void post_order(node * root){
	if(root==NULL){
		return;
	}
	post_order(root->left);
	post_order(root->right);
	cout<<root->data<<" ";
}

void level_order(node* &root){
	queue<node*>q;
	cout<<"Enter the data for the root "<<endl;
	int data;
	cin>>data;
	root=new node(data);
	q.push(root);
	while(!q.empty()){
		node* temp=q.front();
		q.pop();
		cout<<"Enter the data for the left of "<<temp->data<<endl;
		int ldata;
		cin>>ldata;
		
		if(ldata!=-1){
			temp->left=new node(ldata);
			q.push(temp->left);
		}
		cout<<"Enter the data for the right of "<<temp->data<<endl;
		int rdata;
		cin>>rdata;
		
		if(rdata!=-1){
			temp->left=new node(rdata);
			q.push(temp->right);
		}
	}
}

int main(){
	//THE DATA FOR THE TREE IS 
	//  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
	//NOW WE ARE CREATING A ROOT NODE
	node * root=NULL;
	level_order(root);
	//creating a tree
	/*
	root=build_tree(root);
	level_order_traversal(root);
	cout<<"The inorder traversal is "<<endl;
	inorder(root);
	cout<<endl;
	cout<<"This is for the pre order "<<endl;
	preorder(root);
	cout<<endl;
	cout<<"This is for post order traversal"<<endl;
	post_order(root);
	*/
	return 0;
}
