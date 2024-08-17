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

node* sort_list(node* &head){
	int zero_count=0;
	int one_count=0;
	int two_count=0;
	
	node* temp=head;
	while(temp!=NULL){
		if(temp->data==0){
			zero_count++;
		}
				if(temp->data==1){
			one_count++;
		}
				if(temp->data==2){
			two_count++;
		}
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		if(zero_count!=0){
			temp->data=0;
			zero_count--;
		}
				if(one_count!=0){
			temp->data=1;
			one_count--;
		}
				if(two_count!=0){
			temp->data=2;
			two_count--;
		}
		temp=temp->next;
	}
	return head;
}

int main(){
	
	return 0;
}
