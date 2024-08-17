#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number n"<<endl;
	cin>>n;
	int sum =0;
	for(int i=1;i<=n;i++){
		sum=i+ sum;
	}
	cout<<"The sum of "<<n<<" numbers is "<<sum<<endl;
}
