//in this code we have to reverse the linked list in a group wise manner like in the form of pairs
//the pairs can be either of two ,three etc.

#include <iostream>
using namespace std;

//THIS IS DECLARING THE CLASS FOR THE LINKED LIST
class node{
	public:
		int data;
		node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};

//THIS IS FOR THE REVERSE IN THE GROUP LIKE MANNER 
node* reverse(node* &head,int k){
	//this is the base case 
	if(head==NULL){
		return NULL;
	}
	//step 1 (reverse the first k nodes)
	node* next=NULL;
	node* current=head;
	node* previous=NULL;
	int count=0;
	while(current!=NULL && count< k){
		next=current->next;
		current->next=previous;
		previous=current;
		current=next;
		count++;
	}
	//step 2 this is for recursion 
	if(next!=NULL){
		head->next=reverse(next,k);
	}
	//return head of reversed list 
	return previous;
}

//THIS IS FOR ENTRING THE ELEMENT IN THE HEAD
void insertAtHead(node* &head,int data){
	node* temp=new node(data);
	temp->next=head;
	head=temp;
	
}
//now printing the linked list
void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	node * n=new node(10);
	node* head=n;
	node* data=n;
	insertAtHead(head,9);
	insertAtHead(head,8);
	insertAtHead(head,7);
	insertAtHead(head,6);
	insertAtHead(head,5);
	insertAtHead(head,4);
	insertAtHead(head,2);
	print(head);
	data=reverse(head,2);
	print(data);
	return 0;
}
