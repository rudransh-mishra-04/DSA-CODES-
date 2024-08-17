#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* prv;
		Node* nxt;
	//NOW CREATING A CONSTRUCTER
	Node(int data){
		this->data=data;
		this->nxt=NULL;
		this->prv=NULL;
	}
};

void InsertAtStart(int data,Node* &head){
	Node* temp= new Node(data);
	temp->nxt=head;
	head->prv=temp;
	head=temp;
}

void InsertAtEnd(int data,Node* &tail){
	Node* temp= new Node(data);
	tail->nxt=temp;
	temp->prv=tail;
	tail=tail->nxt;
}

void InsertAtAny(Node* &head,Node* &tail,int position,int data){
	//INSERTING THE FIRST POSITION OF THE DOUBLY LINKED LIST
	if(position==1){
		InsertAtStart(data,head);
		return;
	}
	Node* temp=head;
	int cnt=1;
	while(cnt<position-1){
		temp=temp->nxt;
		cnt++;
	}
	//NOW INSERTING AT THE END OF THE LIST
	if(temp->nxt==NULL){
		InsertAtEnd(data,tail);
		return;
	}
	//INSERTING AT THE ANY POINT OF THE LIST
	Node* nodeToInsert=new Node(data);
	//NOW WE ARE JUST CORRECTING ALL THE NEXT AND THE 
	nodeToInsert->nxt=temp->nxt;
	temp->nxt->prv=nodeToInsert;
	temp->nxt=nodeToInsert;
	nodeToInsert->prv=temp;
}

void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->nxt;
	}
	cout<<endl;
}

void getLenght(Node* &head){
	Node* temp=head;
	int count=0;
	while(temp!=NULL){
		count=count+1;
		temp=temp->nxt;
	}
	cout<<"The lenght of the doubly linked list is "<<count<<endl;
}

int main(){
	Node * node1=new Node(10);
	Node* head=node1;
	Node* tail=node1;
	InsertAtStart(9,head);
	InsertAtStart(8,head);
	InsertAtStart(7,head);
	InsertAtEnd(11,tail);
	InsertAtEnd(12,tail);
	InsertAtEnd(13,tail);
	cout<<"This is before inserting at position 3"<<endl;
	print(head);
	InsertAtAny(head,tail,3,100);
	cout<<"This is after inserting at position 3"<<endl;
	print(head);
	getLenght(head);
	return 0;
}
