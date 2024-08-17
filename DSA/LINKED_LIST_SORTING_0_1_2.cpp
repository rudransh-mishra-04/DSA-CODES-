#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node* nxt;
	node(int data){
		this->data=data;
		this->nxt=NULL;
	}
};

void insert(node* &head,int data){
	node* temp=new node(data);
	temp->nxt=head;
	head=temp;
}

void print(node* &head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->nxt;
	}
	cout<<endl;
}

node* arrange(node* &head){
	node* zeroHead=new node(-1);
	node* zeroTail=zeroHead;
	node* oneHead=new node(-1);
	node* oneTail=oneHead;
	node* twoHead=new node(-1);
	node* twoTail=twoHead;
	
	node* current=head;
	while(current!=NULL){
		int value =current->data;
		if(value==0){
			
		}
	}
}

int main(){
	node* ptr=new node(1);
	node* head=ptr;
	insert(head,0);
	insert(head,0);
	insert(head,0);
	insert(head,0);
	insert(head,2);
	insert(head,0);
	insert(head,2);
	insert(head,2);
	insert(head,1);
	cout<<"The currnet linked list is :-"<<endl;
	print(head);
	return 0;
}
