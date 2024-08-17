#include <iostream>
using namespace std;

int main(){
	int a=100;
	int *ptr=&a;
	int **ptra=&ptr;
	
	cout<<"Printing the data "<<endl;
	
	cout<<"The value of data using different syntax is "<<endl;
	cout<<"The value of data using different syntax is "<<*ptr<<endl;
	cout<<"The value of data using different syntax is "<<**ptra<<endl;
	cout<<endl;
	cout<<"The address of a is "<<&a<<endl;
	cout<<"The address of a is "<<ptr<<endl;
	cout<<"The address of a is "<<*ptra<<endl;
	cout<<endl;
	cout<<"The address of a is "<<&ptr<<endl;
	cout<<"The address of a is "<<ptra<<endl;
	cout<<endl;
	cout<<"The address of a is "<<&ptra<<endl;
	return 0;
}
