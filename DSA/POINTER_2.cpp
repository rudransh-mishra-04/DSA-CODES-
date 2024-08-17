#include <iostream>
using namespace std;

int main(){
//	int a=100;
//	int *ptr=0;
//	ptr=&a;
//	cout<<"The address of a is "<<ptr<<endl;
//	cout<<"The value of a is "<<*ptr<<endl;

//int num=5;
//int a=num;
//a++;
//
//cout<<"mum "<<num<<endl;
//cout<<"a "<<a<<endl;

int a=100;
int num =a;

int *ptr=&num;
a++;

cout<<"a "<<a<<endl;
cout<<"pointer "<<*ptr<<endl;
(*ptr)++;
cout<<"pointer "<<*ptr<<endl;
	
	return 0;
}
