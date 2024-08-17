#include <iostream>
#include <stack>
using namespace std;

class Stack{
	//properties
	public:
		int *arr;
		int top;
		int size;
	Stack(int size){
		this->size=size;
		arr=new int[size]; //NOW WE HAVE CREATED AN ARRAY OF THAT PERTICULAR SIZE
		top=-1; //NOW WE HAVE MADE THE TOP =-1
	}
	void push(int element){
		//FIRST WE WILL CHECK IF THERE IS SPACE FOR A NEW ELEMENT TO ADD IN THE LI
		if(size-top>1){
			top++;
			arr[top]=element;
		}else{
			cout<<"stack overflow"<<endl;
		}
	}
	void pop(){
		if(top>=0){
			top--;
		}
		else{
			cout<<"stack undeflow"<<endl;
		}
	}
	
	int peek(){
		if(top>=0){
			return arr[top];
		}
		else{
			cout<<"The stack is empty"<<endl;
			return -1;
		}
	}
	bool isEmpty(){
		if(top==-1){
			return true;
		}
		else{
			return false;
		}
	}
};

int main(){
	Stack st(5);
	st.push(10);
	st.push(11);
	st.push(12);
	cout<<"The top of stack is "<<st.peek()<<endl;
	st.pop();
	cout<<"The top of stack is "<<st.peek()<<endl;
	st.pop();
	st.pop();
	if(st.isEmpty()){
		cout<<"The stack is empty"<<endl;
	}
	else{
		cout<<"The stack is non empty"<<endl;
	}
	return 0;
}
