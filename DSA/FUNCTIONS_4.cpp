//PRIME OR NOT PRIME USING FUNCTIONS 

#include <iostream>
using namespace std;
bool IsPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
		else{
			return 1;
		}
	}
}
int main(){
	cout<<"It will show 1 for prime and 0 for non prime "<<endl;
	cout<<"Enter the number other than 1 and 0 "<<endl;
	int n;
	cin>>n;
	bool data=IsPrime(n);
	cout<<"The number given is "<<data<<endl;
}
