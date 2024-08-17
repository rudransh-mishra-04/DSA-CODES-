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

void insertion(node* &tail,int data,int element){
	if(tail==NULL){
		node* temp=new node(data);
		tail=temp;
		temp->next=temp;
	}
	else{
		node* current=tail;
		while(current->data!=element){
			current=current->next;
		}
		node* temp=new node(data);
		temp->next=current->next;
		current->next=temp;
	}
	
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
	node* nd=new node(10);
	node* tail=nd;
	insertion(tail,11,10);
	insertion(tail,12,11);
	insertion(tail,13,12);
	insertion(tail,14,13);
	insertion(tail,15,14);
	insertion(tail,16,15);
	insertion(tail,17,16);
	print(tail);
	return 0;
}
