#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> num={1,2,3,4,5,6,7};
	cout<<"The element in the data is "<<endl;
	cout<<"The size of the vector num is "<<num.size()<<endl;
	cout<<"The capacity of the vector is "<<num.capacity()<<endl;
	num.push_back(1);
	num.push_back(1);
	num.push_back(1);
	num.push_back(1);
	cout<<"The size of the vector num is "<<num.size()<<endl;
	cout<<"The capacity of the vector is "<<num.capacity()<<endl;
	cout<<"The vector is "<<num<<endl;
	return 0;
}
