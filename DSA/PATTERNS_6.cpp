#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of n"<<endl;
	cin>>n;
	int i=1;
	int dd=1;
	while(i<=n){
		int j=1;
		while(j<=i){
			cout<<dd<<" ";
			j=j+1;
			dd=dd+1;
		}
		cout<<endl;
		i=i+1;
	}
}
