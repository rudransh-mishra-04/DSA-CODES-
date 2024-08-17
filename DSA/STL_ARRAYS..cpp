#include <iostream>
//THIS IS THE INITIALIZATION FOR THE ARRA
#include <array>
using namespace std;

int main(){
	array<int,0> b={};
	array<int,4> a={1,2,3,4};
	
	//THIS IS FOR THE SIZE OF THE ARRAY 
	int size =a.size();
	cout<<size <<endl;
	
	//TO GET THE POSITION AT ANY GIVEN POINT 
	cout<<"The element at the first and second index is "<<a.at(1)<<" and "<<a.at(2)<<endl;
	
	//TO CHECK IF THE ARRAY IS EMPTY OR NOT IT WILL RETURN BOOLEAN AS VALUE
	cout<<"The array is empty or not for array a "<<a.empty()<<endl;
	cout<<"The array is empty or not for array b"<<b.empty()<<endl;
	
	//TO CHECK FOR FIRST AND LAST OPERATION IN THE ARRAY 
	cout<<"The first element is "<<a.front()<<endl;
	cout<<"The last element is "<<a.back()<<endl;
	
	return 0;
}
