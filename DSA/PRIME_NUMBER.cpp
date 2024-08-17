#include <iostream>
using namespace std;
int main(){
	int i=2;
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	while(i<n){
		if(n%i==0){
			cout<<"Not prime"<<endl;
		}
		else{
			cout<<"The numeber is prime"<<endl;
		}
		i=i+1;
	}
}
