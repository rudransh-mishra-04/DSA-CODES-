#include <iostream>
#include <deque>

using namespace std;
int main(){
	deque <int> d;
	d.push_back(1);
	d.push_front(2);
	
	for(int i:d){
		cout<<i<<" ";
	}
	cout<<endl;
	
	cout<<d.front()<<endl;
	//NOW TO EXCESS ANY ELEMENT AT A PERTICULAR INDEX IS 
	
	cout<<"The number at the index is "<<d.at(1)<<endl;
	
	return 0;
}
