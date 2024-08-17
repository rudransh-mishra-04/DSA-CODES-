//	THIS PROBLEM IS NOT SOLVED COMPLETLY LECTURE NUM:- 49 SECOND PART FOR THE SOLUTIONS 
//WE HAVE TO MERGE TWO SORTED LINKED LIST
// THIS CODE IS NOT WORKING FOR A RANDOM NUMBER 
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

void insert(node* &head,int data){
	node *temp=new node(data);
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

void solve(node* &first,node* &second){
	node* prv=first;
	node* curr=prv->next;
	node* sec=second;
	while(curr!=NULL && sec !=NULL){
		if((sec->data>=prv->data)&& (sec->data<=curr->data)){
		prv->next=second;
		curr_2=curr->next;
		second->next=curr;
		curr=prv;
		}
	}
}

node* merging(node* &first,node* &second){
	if(first==NULL){
		return second;
	}
	if(second=NULL){
		return first;
	}
	if(first->data <=second->data){
		solve(first,second);
	}
	else{
		solve(second,first);
	}
}

int main(){
	node *first=new node(5);
	node *second=new node(6);
	node *firstHead=first;
	node *secondHead=second;
	insert(firstHead,3);
	insert(firstHead,1);
	insert(secondHead,4);
	insert(secondHead,2);
	cout<<"The list number 1"<<endl;
	print(firstHead);
	cout<<"The list number 2"<<endl;
	print(secondHead);
	firstHead=merging(first,second);
	print(firstHead);
	return 0;
}
