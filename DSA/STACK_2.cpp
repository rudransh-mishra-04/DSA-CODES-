#include <iostream>
using namespace std;

class Stack{
	public:
		//here we have declared an array and few components to it like top and size 
		int *array;
		int top;
		int size;
	Stack(int size){
		//now we have declared the size of the array and the making the top as -1
		this->size=size;
		array=new int[size];
		top=-1;
	}
	void push(int element){
		if(size-top>1){
			top++;
			array[top]=element;
		}
		else{
			cout<<"Stack overflow"<<endl;
		}
	}
	void pop(){
		if(top>=0){
			top--;
		}
		else{
			cout<<"The stack is empty"<<endl;
		}
	}
	int peek(){
		if(top>=0){
			return array[top];
		}
		else{
			cout<<"The stack is empty"<<endl;
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
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	cout<<"The element at the top is "<<st.peek()<<endl;
	cout<<"Now we are checking for is the stack is empty or not "<<endl;
	if(st.isEmpty()){
		cout<<"The stack is empty"<<endl;
	}
	else{
		cout<<"The stack is not empty"<<endl;
	}
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
		if(st.isEmpty()){
		cout<<"The stack is empty"<<endl;
	}
	else{
		cout<<"The stack is not empty"<<endl;
	}
	return 0;
}
