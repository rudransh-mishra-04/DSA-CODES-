#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> l;
	l.push_back(100);
	l.push_front(101);
	l.push_back(102);
	l.push_front(131);
	l.push_back(104);
	l.push_front(151);
	
	list<int> n(l);//THIS MEANS IT COPYS THE ALL THE ELEMENT OF THE LIST IN THE NEW LIST N.
	list<int> c(5,100);
	
	
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
	
	l.pop_back();
	l.pop_front();
	
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
	
	l.erase(l.begin());
	for(int i:l){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<"the size of the list is "<<l.size()<<endl;
	return 0;
}
