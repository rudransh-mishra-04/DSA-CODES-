#include <iostream>
#include <vector>
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
bool checkpali(vector <int> array){
	int n=array.size();
	int s=0;
	int e=n-1;
	while(s<=e){
		if(array[s]!=array[e]){
			return 0;
		}
		s++;
		e--;
	}
	return 1;
}

bool IsPalindrome(node* &head){
	vector <int> array;
	node* temp=head;
	while(temp!=NULL){
		array.push_back(temp->data);
		temp=temp->next;
	}
	return checkpali(array);
}

int main(){
	node* one=new node(1);
	node* head=one;
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,3);
	insert(head,2);
	insert(head,1);
	print(head);
	cout<<endl;
	bool data =IsPalindrome;
	if(data==1){
		cout<<"The list above is a plaindrome "<<endl;
	}
	else{
		cout<<"The list is not a palindrome "<<endl;
	}
	return 0;
}
