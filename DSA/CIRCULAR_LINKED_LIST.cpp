//This is the code for a circular linked list

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

void del(node* &tail,int element){
	if(tail==NULL){
		cout<<"The list is empty so no deletion"<<endl;
		return;
	}
	node* per=tail;
	node* cur=per->next;
	while(per->next->data!=element){
		per=per->next;
		cur=cur->next;
	}	
	per->next=cur->next;
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
	print(tail);
	insertion(tail,1,2);
	print(tail);
		insertion(tail,2,3);
	print(tail);
		insertion(tail,3,4);
	print(tail);
		insertion(tail,4,6);
	print(tail);
		insertion(tail,6,7);
	print(tail);
		insertion(tail,7,8);
	print(tail);
		insertion(tail,4,5);
	print(tail);
	del(tail,6);
	print(tail);
	return 0;
}


