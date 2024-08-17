#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack <string> s;
	s.push("hello ");
	s.push("my ");
	s.push("name ");
	s.push("is ");
	s.push("rudransh ");
	cout<<endl;
	cout<<"The element at the top is "<<s.top(); //THIS IS RUDRANSH BECAUSE IT WAS LAST TO ENETER 
	cout<<endl;
	//TO POP WE USE 
	s.pop();
	cout<<"The element at the top is "<<s.top();
	cout<<endl;
	cout<<"The size of the stack is "<<s.size()<<endl;
	cout<<"Is the stack is empty of not "<<s.empty()<<endl; //0 MEANS NO 
	return 0;
}
