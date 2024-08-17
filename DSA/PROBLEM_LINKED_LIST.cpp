#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* next=NULL;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

void insertAtHead(node* &head,int data){
	node* temp=new node(data);
	temp->next=head;
	head=temp;
}

node* reverse(node* &head){
	if(head==NULL || head->next==NULL){
		cout<<"The list can not be reversed"<<endl;
	}
	node* previous=NULL;
	node* current=head;
	node* forward=NULL;
	while(current!=NULL){
		forward=current->next;
		current->next=previous;
		previous=current;
		current=forward;
	}
		return previous;
}

void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	node* a=new node(9);
	node* head=a;
	insertAtHead(head,8);
	insertAtHead(head,7);
	insertAtHead(head,6);
	insertAtHead(head,5);
	insertAtHead(head,4);
	print(head);
	head=reverse(head);
	print(head);
	return 0;
}
