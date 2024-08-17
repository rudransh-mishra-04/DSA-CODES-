#include <iostream>
#include <stack>
using namespace std;

void insertion(stack<int>&st,int data){
	//base case 
	if(st.empty()){
		st.push(data);
		return;
	}
	int nums =st.top();
	st.pop();
	insertion(st,data);
	st.push(nums);
}

void print(stack<int>st){
	while(!st.empty()){
		cout<<st.top()<<endl;
		st.pop();
	}
}
int main(){
	stack<int>st;
	cout<<"The stack before insertion "<<endl;
	st.push(8);
	st.push(7);
	st.push(6);
	st.push(5);
	st.push(4);
	st.push(3);
	print(st);
	cout<<"Enter the number that you wnat to inter at the bottom of stack "<<endl;
	int data;
	cin>>data;
	cout<<endl;
	cout<<"The stack after insertion "<<endl;
	insertion(st,data);
	print(st);
	return 0;
}
