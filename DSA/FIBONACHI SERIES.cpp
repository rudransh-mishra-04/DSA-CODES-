#include <iostream>
using namespace std;
int main(){
	int a=0;
	int b=1;
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	cout<<"The fibinachi series is "<<endl;
	cout<<"0 1 ";
	for(int i=1;i<=n;i++){
		int next_number=a+b;
		cout<<next_number<<" ";
		a=b;
		b=next_number;
	}
}
