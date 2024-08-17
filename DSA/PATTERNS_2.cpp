#include <iostream>
using namespace std;
int main(){
	int a=1;
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	while(a<=n){
		int j=1;
		while(j<=n){
			cout<<a;
			j=j+1;
		}
		cout<<endl;
		a=a+1;
	}
}
