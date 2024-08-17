#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	int sum =0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum =sum+i;
			
		}
	}
	cout<<"The sum on all positive numbers between 1 to N is "<<sum<<endl;
}
