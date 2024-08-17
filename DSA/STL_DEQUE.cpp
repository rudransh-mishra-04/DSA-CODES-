#include <iostream>
#include <deque>
using namespace std;

int main(){
	deque<int> a;
	cout<<endl;
	//ADDING THE ELEMENTS 
	a.push_back(19);
	a.push_front(29);
	a.push_back(39);
	a.push_back(519);
	
	for(int i:a){
		cout<<i<<" ";
	}
	cout<<endl;
	//REMOVING THE ELEMENTS 
	
	a.pop_back();
	
		for(int i:a){
		cout<<i<<" ";
	}
	cout<<endl;
	a.pop_front();
	
		for(int i:a){
		cout<<i<<" ";
	}
	cout<<endl;
	
	a.erase(a.begin(),a.begin()+1);
	return 0;
}
