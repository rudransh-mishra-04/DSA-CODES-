#include <iostream>
using namespace std;

int main(){
	
	//CREATION 

	int n;
	cout<<"Enter the size of n to create in n*n form "<<endl;
	cin>>n;
	int ** arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[n];
	}
	
	//TAKING THE INPUT DONE 
	
	cout<<"now enter the elements "<<endl;
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	//PRINTING THE 2-D ARRAY

	cout<<endl;
	cout<<"The 2-D array is "<<endl;
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
