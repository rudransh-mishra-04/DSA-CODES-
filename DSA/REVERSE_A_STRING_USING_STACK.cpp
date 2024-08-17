#include <iostream>
using namespace std;

class Stack{
	public:
		int top;
		int size;
		int *arr;
	Stack(int size){
		this->size=size;
		arr=new int[size];
		top=-1;
	}
	//THIS IS TO ADD A ELEMENT IN THE STACK
	void push(int element){
		if(size-top>1){
			top++;
			arr[top]=element;
		}
		else{
			cout<<"The stack is full"<<endl;
		}
	}
	
	void pop(){
		if(top>=0){
			arr--;
		}
		else{
			cout<<"The stack is empty"<<endl;
		}
	}
	
	int peek(){
		if(top>=0){
			return arr[top];
		}
		else{
			cout<<"The stack is empty"<<endl;
		}
	}
	
	//THIS IS FOR PRINTING THE ELEMENT IN THE STACK 
	void print(){
		while(top!=-1){
		cout<<arr[top]<<" ";
		pop();
		}
		return ;
	}
};

int main(){
	Stack st(6);
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(6);
	st.print();
	return 0;
}
