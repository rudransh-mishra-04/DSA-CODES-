//THIS PROGRAM IS FOR LINKED LIST
#include <iostream>
using namespace std;

class Node{
	public:
		int data; //THIS WILL STORE THE DATA 
		Node* next; //THIS IS A POINTER THAT STORES THE DATA FOR THE NEXT NODE 
		
		//WITH THE HELP OF CONSTRUCTOR NOW WE ARE GOING TO ADD VALUES TO THE NODES 
		Node(int data){
				this->data=data;
				this->next=NULL;
		}		
};

void InsertAtHead(Node* &head,int d){//WE HAVE TAKEN REFRENCE BECAUSE WE DONT WANT ANY COPY

	 Node* temp=new Node(d);//FIRSTLY IT WILL CREATE A NEW NODE 
	 temp->next=head;//NOW THE NEXT NODE WILL POINT THE HEAD
	 head=temp;//NOW WE HAVE CHANGED THE NODE HEADS
}
void print(Node* &head){
	Node* temp= head;
	
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next; 
	}
	cout<<endl;
}

int main(){
	
	Node* node1=new Node(10); //WE ARE CREATING A NODE IN THE POINTER 
	cout<<node1->data<<endl;
	cout<<node1->next<<endl;
	
	//HEAD POINTED TO NODE 1
	
	return 0;
}
