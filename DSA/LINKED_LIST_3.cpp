#include <iostream>
using namespace std;

//CREATING A CLASS WHICH CONSIST OF NODES DATA AND NEXT 

class node{
	public:
		int data;
		node* next;
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};
//INSERT AT THE BEGINNING
void InsertAtStart(node* &head,int data){
	node* temp=new node(data);
	temp->next=head;
	head=temp;
}
//INSERT AT THE END 
void InsertAtEnd(node* &tail,int data){
	node*temp=new node(data);
	tail->next=temp;
	tail=tail->next;
}
//THIS IS INSERTING AT THE RANDOM POSITION
void insertAtPosition(node* &head,int position,int data){
	node* temp=head;
	int count=1;
	while(position<count-1){
		temp=temp->next;
		count++;
	}
	node* nodeToInsert=new node(data);
	nodeToInsert->next=temp->next;
	temp->next=nodeToInsert;
}
//THIS IS FOR THE DELETION OF A NODE IN THE LINKED LIST
void deleteNode(int position,node* &head){
	
}

//THIS IS THE PRINTING STATEMENT
void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	node* node1=new node(10);
	node* head=node1;
	node* tail=node1;
	InsertAtStart(head,7);
	InsertAtStart(head,8);
	InsertAtStart(head,9); 
	InsertAtEnd(tail,11);
	InsertAtEnd(tail,12);
	insertAtPosition(head,2,22);
	print(head);
	return 0;
}
