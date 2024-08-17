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

void insertion(node* &tail,int element,int data){
	//THIS IS THE CASE IF THEERE IS NO ELEMENT IN THE LINKED LIST
	if(tail==NULL){
		node* temp=new node(data);
		tail=temp;
		temp->next=temp;
	}
	else{
		node* current=tail; //CREATED A POINTER WHICH IS POINTING TO THE TAIL
		while(current->data !=element){ // Now we are searching for the elementa fter which we are going to add the node
			current=current->next;
		}
		//Now we are out of the loop so we have found the element and the pointer is at that number 
		node* temp=new node(data);
		temp->next=current->next;
		current->next=temp;
	}
}

//THIS IS THE MAIN FUNCTION TO USE FLOYD MEATHOD TO FIND THE LOOP 

node* floyd_cycle(node* &head){
	if(head==NULL){
		return NULL;
	}
	node* slow=head;
	node* fast=head;
	while(slow!=NULL  && fast!=NULL){
		fast=fast->next;
		if(fast!=NULL){
			fast=fast->next;
		}
		slow=slow->next;
		if(slow==fast){
			return slow;
		}
	}
	return NULL;
}

void print(node* &tail){
	node* temp=tail;
	do{
		cout<<tail->data<<" ";
		tail=tail->next;
	}while(tail!=temp);
	cout<<endl;
}

int main(){
	node* tail=NULL;//At this point the linked list is empty 
	insertion(tail,2,1);
	insertion(tail,1,2);
	insertion(tail,2,3);
	insertion(tail,3,4);
	insertion(tail,4,6);
	insertion(tail,6,7);
	insertion(tail,7,8);
	insertion(tail,4,5);
	print(tail);
	if(floyd_cycle(tail)!=NULL){
		cout<<"The loop is not preasent"<<endl;
	}
	else{
		cout<<"The loop is preasent"<<endl;
	}
	return 0;
}
