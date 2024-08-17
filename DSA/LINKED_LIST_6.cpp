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

void insert_at_head(node* &head,int data){
	node* temp =new node(data);
	temp->next=NULL;
}

int main(){
	node* head=new node(10);
	return 0;
}
