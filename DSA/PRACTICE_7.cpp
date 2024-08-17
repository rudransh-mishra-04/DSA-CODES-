//AFTER THE VIDEO WRITE ENTIRE CODE FOR ALL TYPE OF TRAVERSAL AND CREATION OF A BST AS WELL AS WRITE THE CODE TO FIND THE 
//BIGGEST AND SMALLEST ELEMENR 

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

Node* InBST(Node* root,int data){
	if(root==NULL){
		root=new Node(data);
		return root;
	}
	if(data>root->data){
		root->right=InBST(root->right,data);
	}
	if(data<root->data){
		root->left=InBST(root->left,data);
	}
	return root;
}

void takeInput(Node* &root){
	cout<<"Enter the data to put in the BST tree and end with -1 to stop it "<<endl;
	int data;
	cin>>data;
	while(data!=-1){
		root=InBST(root,data);
		cin>>data;
	}
}

void level_order_traversal(Node* root){
	if(root==NULL) return;
	queue<Node*>q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty()){
		Node* temp=q.front();
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

void Inorder(Node* &root){
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	cout<<root->data<<" ";
	Inorder(root->right);
}

void preorder(Node* &root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	Inorder(root->left);
	Inorder(root->right);
}

void postorder(Node* &root){
	if(root==NULL){
		return;
	}
	Inorder(root->left);
	Inorder(root->right);
	cout<<root->data<<" ";
}

int main(){
	Node* root=NULL;
	takeInput(root);
	cout<<"This is the IN order print"<<endl;
	Inorder(root);
	cout<<endl;
	cout<<"This is the PRE order print"<<endl;
	preorder(root);
	cout<<endl;
	cout<<"This is the post order print"<<endl;
	postorder(root);
	cout<<endl;
	cout<<"This is the level order traversal"<<endl;
	level_order_traversal(root);
	return 0;
}
