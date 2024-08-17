#include <iostream>
using namespace std;

int main (){
	int a=100;
	int b=110;
	
	int *ptr=&a;
	
	cout<<"The address of a is "<<ptr<<endl;
	cout<<"The value of a using pointer is "<<*ptr<<endl;
	
	int *q=ptr;
	cout<<*q<<endl;
	cout<<q<<endl;
	
	int i=11;
	int *pp=&i;
	
	*pp=*pp+1;
	cout<<(*pp)++<<endl;
	return 0;
}
