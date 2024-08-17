#include <iostream>
using namespace std;

int power(int n){
	if(n==0){
		return 1;
	}
	int one = power(n-1);
	int two = 2*one;
	
	return two;
}

int main(){
	int n;
	cout<<"Enter the power for the number 2 "<<endl;
	cin>>n;
	int answer=power(n);
	cout<<"The final answer is "<<answer<<endl;
	return 0;
}
