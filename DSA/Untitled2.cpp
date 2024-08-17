//IN THIS PROGRAM WE HAVE TO SORT THE GIVEN LINKED LIST FROM SMALLER TO LARGEST NUMBER 
//THE NUMBER IN THIS CASE IS 0,1,2.
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

node* sortingList(node* &head){
	int zero=0;
	int one=0;
	int two=0;
	
	node* temp=head;
	
	while(temp!=NULL){
		if(temp->data==0){
			zero++;
		}
		if(temp->data==1){
			one++;
		}
		if(temp->data==2){
			two++;
		}
		temp=temp->nxt;
	}
	temp=head;
	while(temp!=NULL){
		if(zero!=0){
			temp->data=0;
			zero--;
		}
		else if(one!=0){
			temp->data=1;
			one--;
		}
		else if(two!=0){
			temp->data=2;
			two--;
		}
		temp=temp->nxt;
	}
	return head;
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
	cout<<"This is before sorting in the numbers of 0,1 and 2."<<endl;
	print(head);
	head=sortingList(head);
	cout<<"This is after sorting in the numbers of 0,1 and 2."<<endl;
	print(head);
	return 0;
}
