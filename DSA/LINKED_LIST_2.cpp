#include <iostream>
using namespace std;

// WE HAVE DECLARED A CLASS IN WHICH WE ARE GOING TO TALK ABOUT THE LINKED LIST
class node{
	public:
		int data;
		node* next;
		
//WE HAVE USED THE CONSTRUCTER BECAUSE IT HELPS IN CREATING THE NODE 		
	node(int data){
		this->data=data;
		this->next=NULL;
	}
};
//INSERTING FROM THE END
void insertAtTail(node* &tail,int data){
		node* temp=new node(data);
		tail->next=temp;
		tail=tail->next;
}
//INSERTING AT THE BEGINNIG OF THE LINKED LIST
void insertAtHead(node* &head,int data){
	node* temp=new node(data);
	temp->next=head;
	head=temp;
}

void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	
	//cout<<"The data in node1 is "<<node1.data<<endl; 
	//ABOVE LINE WILL NOT WORK BECAUSE IT IS A POINTER SO DOT WILL NOT BE USED
	
	//CREATED A NEW NODE 
	node* node1=new node(10);
	//cout<<"The data in node1 is "<<node1->data<<endl;
	//cout<<"The next is "<<node1->next<<endl;
	
	node* head=node1;	//HEAD POINTED TO NODE 1
	node* tail=node1;
	print(head);
	//	insertAtHead(head,12);
	insertAtTail(tail,12);
	insertAtTail(tail,13);
	insertAtTail(tail,14);
	insertAtTail(tail,15);
	insertAtTail(tail,16);
	print(head);
	return 0;
}
