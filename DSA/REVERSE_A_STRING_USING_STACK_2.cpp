#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	string st="rudransh";
	stack <char> s;
	for(int i=0;i<st.length();i++){
		char ch=st[i];
		s.push(ch);
	}
	cout<<"The size of the stack is "<<s.size()<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;	
}
