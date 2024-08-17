#include <iostream>
using namespace std;

int sum(int *ptr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+ptr[i];
	}
	return sum;
}

int main(){
	int n;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	int *ptr=new int[n];
	for(int i=0;i<n;i++){
		cin>>ptr[i];
	}
	int answer=sum(ptr,n);
	
	cout<<"The sum of the elements in the array is "<<answer<<endl;
	return 0;
}
