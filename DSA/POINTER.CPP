#include <iostream>
using namespace std;

int main(){
	int a=10;
	cout<<a<<endl;
	
	//ADDRESSOF OPERATOR 
	cout<<&a<<endl;
	
	int *ptr=&a;
	
	cout<<*ptr<<endl;
	
	double d=1.11;
	
	double *ptrd=&d;
	
	cout<<"The double is "<<*ptrd<<endl;
	
	cout<<"The size of pointer is "<<sizeof(ptrd)<<endl;
	
	return 0;
}
