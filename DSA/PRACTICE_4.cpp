#include <iostream>
#include <array>
using namespace std;

int main(){
	array<int,6> b={};
	array<int,6> a={1,2,3,4,5,6};
	//THIS IS FOR CHECKING THE SIZE OF THE ARRAYS 
	cout<<"The size of the aray b is "<<b.size()<<endl;
	cout<<"The size of the aray a is "<<a.size()<<endl;
	//NOW CHECKING IF THE ARRAY IS EMPTY OR NOT
	cout<<"Checking if the array b is empty or not "<<b.empty()<<endl;
	cout<<"Checking if the array a is empty or not "<<a.empty()<<endl;
	return 0;
}
