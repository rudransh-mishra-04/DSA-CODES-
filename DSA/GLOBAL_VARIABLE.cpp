#include <iostream>
using namespace std;

int al=100;
//THIS IS A GLOBAL VARIABLE 
int data(int num){
	int result =num+al;
	return result;
}

int main(){
	int a=100;
	cout<<"The main function is "<<a+al<<endl;
	int result=data(a);
	cout<<"The user function is "<<result<<endl;
	return 0;
}
