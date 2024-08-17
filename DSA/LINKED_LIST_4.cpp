#include <iostream>
using namespace std;
class A{
	public:
		int data;
		A* next;
	A(int data){
		this->data=data;
		this->next=NULL;
	}
};

void InsertAtStart(int data,A* &head){
	A* temp=new A(data);
	temp->next=head;
	head=temp;
}

void InsertAtEnd(int data,A* &tail){
	A* temp=new A(data);
	tail->next=temp;
	tail=tail->next;

}

void print(A* &head){
	A* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	A* node=new A(10);
	A* head=node;
	A* tail=node;
	InsertAtStart(9,head);
	InsertAtEnd(11,tail);
	InsertAtEnd(12,tail);
	InsertAtEnd(13,tail);
	InsertAtStart(8,head);
	InsertAtStart(7,head);
	InsertAtStart(6,head);
	print(head);	
	return 0;
}
