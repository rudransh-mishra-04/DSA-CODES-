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
int getlength(node* head){
	int length=0;
	node* temp=head;
	while(temp!=NULL){
		length++;
	}
	return length;
}
//THIS IS TO FIND THE MIDDLE ELEMENT
void middle(node* &head){
	//GETTING THE LENGTH OF THE LINKED LIST
	int length=getlength(head);
	node* temp=head;
	for (int i = 0; i < length / 2; i++) {
        temp = temp->next;
    }
    cout << "The middle element's data is: " << temp->data << endl;
}
//THIS IS FOR PRINTING 
void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
//THIS IS FOR INSERTION AT THE BEGHINNING 
void insertAtHead(node* &head,int data){
	node* temp=new node(data);
	temp->next=head;
	head=temp;
}
//THE MAIN FUNCTION 
int main(){
	node* n=new node(10);
	node* head=n;
	insertAtHead(head,9);
	insertAtHead(head,8);
	insertAtHead(head,7);
	insertAtHead(head,6);
	insertAtHead(head,5);
	print(head);
	middle(head);
	return 0;
}


