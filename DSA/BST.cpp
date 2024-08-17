#include <iostream>
#include <queue>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
	Node(int data){
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
}; 

Node* InsertIntoBST(Node* root,int data){
	//base case
	if(root==NULL){
		root= new Node(data);
		return root;
	}
	if(data>root->data){
		root->right=InsertIntoBST(root->right,data);
	}
	if(data<root->data){
		root->left=InsertIntoBST(root->left,data);
	}
	return root;
}

void TakeInput(Node* &root){
	int data;
	cin>>data;
	while(data!=-1){
		root=InsertIntoBST(root,data);
		cin>>data;
	}
}

Node* deleteBST(Node* root,int val){
	//base case
	if(root==NULL){
		return root; 
	}
	if(root->data==val){
		//Case for zero child
		if(root->left==NULL && root->right==NULL){
			delete root;
			return NULL;
		}
		//case for one child
		
		//THIS IS FOR CHILD IN THE LEFT SIDE 
		if(root->left!=NULL && root->right==NULL){
			Node* temp=root->left;
			delete root;
			return temp;
		}
		//THIS IS FOR THE CHILD IN THE RIGHT SIDE 
			if(root->left==NULL && root->right!=NULL){
			Node* temp=root->right;
			delete root;
			return temp;
		}
		//case for two child or an entire branch of the tree
			if(root->left!=NULL && root->right!=NULL){
				int mini=minval(root->right)->data;
				root->data=mini;
				root->right=deleteBST(root->right,mini);
				return root;
		}
	}
	else if(root->data>val){
		//GOING TO THE LEFT PART OF THE TREE
	root->left=delete(root->left,val);
	return root;
	} 
	else{
		//GOING TO THE RIGHT PART OF THE TREE
		root->right=deleteBST(root->right,val);
		return root;
	}
}

void level_order_traversal(Node *root){
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node * temp=q.front();
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

int main(){
	Node* root=NULL;
	cout<<"Enter the data to create BST "<<endl; 
	TakeInput(root);
	level_order_traversal(root);
	return 0;
}

