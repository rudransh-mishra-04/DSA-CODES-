#include <iostream>
using namespace std;
int mainO(){
	int n=234;
	int product=1;
	int sum=0;
	while(n!=0){
		int rem=n%10;
		product=product*rem;
		sum=sum+rem;
		n=n/10;
	}
	cout<<"The product is "<<endl;
	cout<<"The sum is "<<endl;
}
