// THIS IS PROGRAM WHERE WE ARE FINDING A NODE WHARE WE ARE FINDING THE NODE WHERE THE LOOP HAS STARTED
//THIS IS THE BASIC SYNTAX
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

//THIS IS THE FUNCTION IN WHICH WE ARE GOING TO ADD THE ELEMENT IN THE LIST

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
//BY THIS WE ARE GOING TO FIND WHERE IS THE POINT AT WHICH THE SLOW AND FAST MEET

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

//THIS IS THE PRINTING FUNCTION 

void print(node* &tail){
	node* temp=tail;
	do{
		cout<<tail->data<<" ";
		tail=tail->next;
	}while(tail!=temp);
	cout<<endl;
}

//NOW WE ARE FINDING THE NODE AT WHICH THE LOOP BEGUN 

node* getStartingNode(node* &tail){
	if(tail==NULL){
		return NULL;
	}
	node* intersection = floyd_cycle(tail);
	node* slow=tail;
	while(slow!=intersection){
		slow=slow->next;
		intersection=intersection->next;
	}
	return slow;
}

//THIS IS THE POINT OF PROGRAM AT WHICH WE ARE GOING TO REMOVE THE NODE 
void remove_loop_node(node* &tail){
	node* current=getStartingNode(tail);
	node* temp=current;
	while(temp!=current){
		temp=temp->next;
	}
	temp->next=N
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
	node* loop=getStartingNode(tail);
	cout<<"The starting of the loop is at "<<loop->data<<endl;
	return 0;
}
