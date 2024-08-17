#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node *nxt;
	node(int data){
		this->data=data;
		this->nxt=NULL;
	}
};

void print(node* & head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->nxt;
	}
	cout<<endl;
}

void insert(node* &head,int data){
	node* temp=new node(data);
	temp->nxt=head;
	head=temp;
}

int main(){
	node* ptr=new node(10); 
	node* head=ptr;
	insert(head,9);
	insert(head,8);
	insert(head,7);
	insert(head,6);
	insert(head,5);
	insert(head,4);
	insert(head,3);
	insert(head,2);
	insert(head,1);
	print(head);
	return 0;
}
