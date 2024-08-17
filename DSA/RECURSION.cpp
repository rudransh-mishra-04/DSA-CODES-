#include <iostream>
using namespace std;

int factorial(int n){
	//firstly writing a base case 
	
	if(n==0){
		return 1;
	}
	int choti = factorial(n-1);
	int badi =n* choti;
	
	return badi;
}

int main(){
	int n ;
	cin>>n;
	int data=factorial(n);
	cout<<data<<endl;
	return 0;
}
