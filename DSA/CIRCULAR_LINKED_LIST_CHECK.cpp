//in this program we have to check if the linke list is circular or not in nature
#include <iostream>
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

bool circular_check(node* &head){
	//THIS IS TO CHECK IS THE LIST IS EMPTY OR THE NEXT ELEMENT IS EMPTY
	if(head==NULL){
		return true;
	}
	node* temp=head->next;
	while(temp==NULL || temp==head){
		temp=temp->next;
	} 
	if(temp==head){
		return true;
	}
	else{
		return false;
	}
}
void insertAtHead(node* &head,int data){
	node* temp=new node(data);
	temp->next=head;
	head=temp;
	
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
	node* n=new node(10);
	node* head=n;
	insertAtHead(head,9);
	insertAtHead(head,8);
	insertAtHead(head,7);
	insertAtHead(head,6);
	insertAtHead(head,5);
	insertAtHead(head,4);
	insertAtHead(head,2);
	print(head);
	if (circular_check(head)){
		cout<<"The linked list is circular"<<endl;
	}
	else{
		cout<<"The linked list is not circluar"<<endl;
	}
}
