#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<string> s;
	s.push("hello ");
	s.push("my ");
	s.push("name ");
	s.push("is ");
	s.push("rudransh ");
	
	cout<<"The element at the top is "<<s.front();
	s.pop();
	cout<<endl;
	cout<<"The element at the top is "<<s.front();
	return 0;
}
