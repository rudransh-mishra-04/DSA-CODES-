#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

void insert(node* &head,int data){
	node* temp=new node(data);
	temp->next=head;
	head=temp;
}

void print(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
//THIS IS FOR FINDING THE MID OF THE LINKED LIST
//THIS IS ALSO CALLED A TORTOISE APPROACH
node* findMid(node* head){
	node* slow=head;
	node* fast=head->next;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
//NOW WE ARE MERGING TWO NODES IN THE ORDER
node* merging(node* left,node* right){
	if(left==NULL){
		return right;
	}
	if(right==NULL){
		return left;
	}
	
	//NOW WE HAVE CREATED A DUMMY NODE
	node* ans= new node(-1);
	node* temp=ans;
	//THIS IS MERGING TWO SORTED LIKED LIST
	while(left!=NULL && right!=NULL){
		if(left->data <= right->data){
			temp->next=left;
			temp=left;
			left=left->next; 
		}
		else{
			temp->next=right;
			temp=right;
			right=right->next;
		}
		while(left!=NULL){
			temp->next=left;
			temp=left;
			left=left->next; 
		}
		while(right!=NULL){
			temp->next=right;
			temp=right;
			right=right->next;
		}
	}
	//WE HAVE TO REMOVE THE DUMMY POINTER
	
	ans=ans->next;
	return ans;
}

node* merge(node* head){
	//HERE WE ARE USING RECURSION SO THERE MUST BE A BASE CASE
	if(head==NULL || head->next==NULL){
		return head;
	}
	//THERE IS A FUNCTION AS FINDMID WHICH GIVES THE INFO ABOUT THE MIDDLE ELEMENT IN THE LINKED LIST
	node* mid=findMid(head);
	//AFTER WE HAVE BROKEN LIKED LIST AND FOUND TWO PARTS THE LEFT PART STARTS FROM HEAD AND RIGHT STARTS FROM 
	//AFTER MID 
	node* left=head;
	node* right=mid->next;
	mid->next=NULL;
	
	//RECURSIVE CALLS TO SOLVE BOTH HALVS 
	left=merge(left);
	right=merge(right);
	
	//NOW MERGE BOTH LEFT AND RIGHT HALVES 
	node* result=merging(left,right);
	return result;
}


int main(){
	node *first=new node(8);
	node *head=first;
	insert(head,2);
	insert(head,4);
	insert(head,3);
	insert(head,6);
	insert(head,7);
	insert(head,9);
	insert(head,0);
	insert(head,1);
	print(head);
	head=merge(head);
	print(head);
	return 0;
}
