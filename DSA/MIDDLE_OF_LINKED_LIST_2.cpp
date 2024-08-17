#include <iostream>
#include <stack>
using namespace std;

void remove(stack <int>&st,int size,int current){
	
	if(st.empty()){
		return;
	}
	int temp=st.top();
	st.pop();
	remove(st,size,current+1);
	if(current!=size/2){
		st.push(temp);
	}
}

void print(stack <int> st){
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
}

int main(){
	stack <int> st;
	st.push(5);
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	print(st);
	cout<<"The size of the stack is "<<st.size()<<endl;
	int size=st.size();
	remove(st,size,0);
	print(st);
	return 0;
}
