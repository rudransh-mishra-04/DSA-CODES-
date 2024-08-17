#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	vector<int> a(5,1,2,3,4,5);
	
	vector<int> n;//NOW AS WE SPEAK THE SIZE OF THE VECTOR IS CURRENTLY 0
	cout<<endl;
	cout<<"The capacity is "<<n.capacity()<<endl;
	cout<<"The size of the array is "<<n.size()<<endl;
	cout<<endl;
	n.push_back(10);
	cout<<"The capacity is "<<n.capacity()<<endl;
	cout<<"The size of the array is "<<n.size()<<endl;
	cout<<endl;
	n.push_back(20);
	cout<<"The capacity is "<<n.capacity()<<endl;
	cout<<"The size of the array is "<<n.size()<<endl;
	cout<<endl;
	n.push_back(23);
	cout<<"The capacity is "<<n.capacity()<<endl;
	cout<<"The size of the array is "<<n.size()<<endl;
	cout<<endl;
	
	//THE CAPACITY GETS DOUBLED AS IT CROSSES THE INITIAL CAPACITY OF THE VECTOR 
	//THE SIZE AND THE CAPACITY ARE NOT THE SAME 
	
	//USING AT OPERATION
	cout<<"The element at index 2 is "<<n.at(2)<<endl;
	
	//NOW POPPING
	n.pop_back();
	cout<<"The capacity is "<<n.capacity()<<endl;
	cout<<"The size of the array is "<<n.size()<<endl;
	
	//BEFORE CLEARING
	cout<<"The capacity is "<<n.capacity()<<endl;
	cout<<"The size of the array is "<<n.size()<<endl;
	
	n.clear();
	
	//AFTER CLEARING
		cout<<"The capacity is "<<n.capacity()<<endl;
	cout<<"The size of the array is "<<n.size()<<endl;
	

	return 0;
}
