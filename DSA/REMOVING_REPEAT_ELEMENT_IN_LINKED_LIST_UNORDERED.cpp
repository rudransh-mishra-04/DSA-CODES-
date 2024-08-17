//THIS CODE IS NOT WORKING SEE VIDEO NUMBER 53 IN PLAYLIST TO UNDERSTAND#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

void insertion(node* &head,int data){
	if(head==NULL){
		node* temp=new node(data);
		temp=temp->next;
	}
	else{
		node* temp=new node(data);
		temp->next=head;
		head=temp;
	}
}

void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

node* no_repeat(node* &head){
	if(head==NULL){
		return NULL;
	}
	node* count=head;
	node* count_n=count->next;
	while(count!=NULL && count_n!=NULL){
		if(count->data==count_n->data){
			node*data=count_n;
			count->next=count_n->next;
			delete(count_n);
		}
		else{
			count=count->next;
		}
	}
	return head;
}
int main(){
	node* nd=new node(10);
	node* head=nd;
	insertion(head,8);
	insertion(head,10);
	insertion(head,10);
	insertion(head,8);
	insertion(head,8);
	insertion(head,10);
	insertion(head,8);
	insertion(head,10);
	insertion(head,1);
	print(head);

	head=no_repeat(head);
	print(head);
	return 0;
}
