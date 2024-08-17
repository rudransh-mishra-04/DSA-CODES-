#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of n"<<endl;
	cin>>n;
	int i=0;
	while(i<=n){  // THIS DETERMINE THE ROW 
		int j=1;
		while(j<=i){ // THIS WILL DETERMIN THE COLUMN 
			cout<<" * "; // WE WILL PRINT THE * AS MUCH TIMES AS THE ROW 
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}

