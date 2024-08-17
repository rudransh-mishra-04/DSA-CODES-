#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number : "<<endl;
	cin>>n;
	bool isPrime=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
		cout<<"The number was not prime"<<endl;
		isPrime=0;
		break;	
		}
		else{
			cout<<"The numebr is prime"<<endl;
			break;
		}
		if(isPrime ==0){
			cout<<"Not a prime"<<endl;
		}
		else{
			cout<<"Is prime"<<endl;
		}
	}
}
