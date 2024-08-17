//THIS CODE IS NOT WORKING SEE VIDEO NUMBER 53 IN PLAYLIST TO UNDERSTAND

#include <iostream>
using namespace std;
//THIS IS THE DECELERATION OF THE CLASS 
class node{
	public:
		int data;
		node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

//THIS IS FOR THE INSERTION OF THE DATA IN THE LINKED LIST FROM THE START
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

//THIS IS FOR PRINTING THE ELEMENTS OF A GIVEN LINKED LIST
void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

node* no_repeat(node* head){
	if(head==NULL|| head->NULL){
		return NULL;
	}
	node* temp=head;
	while(temp!=NULL){
		
		if(temp->data==temp->next->data && (temp->next!=NULL)){
			node* nn=temp->next->next;
			node* to_delete=temp->next;
			delete(to_delete);
			temp->next=nn;
		}
		else{
			temp=temp->next;
		}
	}
	return head;
}

int main(){
	node* nd=new node(4);
	node* head=nd;
	insertion(head,4);
	insertion(head,4);
	insertion(head,4);
	insertion(head,3);
	insertion(head,3);
	insertion(head,3);
	insertion(head,2);
	insertion(head,2);
	insertion(head,1);
	print(head);
	head=no_repeat(head);
	print(head);
	return 0;
}
