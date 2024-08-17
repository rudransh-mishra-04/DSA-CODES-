#include <iostream>
using namespace std;

void input(int arr[][3],int m,int n){
	cout<<"Enter the desired array "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
}

void print(int arr[][3],int m,int n){
	cout<<"The array is "<<endl;
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int binary_search(int array[][3],int n, int m,int k){
	int start=0;
	int end=m*n-1;
	int mid=start+(end-start)/2;
	while(start<end){
		int element=array[mid/m][mid%n];
		if(element==k){
			return 1;
		}
		if(element>k){
			end=mid-1;
		}
		if(element<k){
			start=start+1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}

int main(){
	int array[3][3];
	input(array,3,3);
	print(array,3,3);
	int k;
	cout<<"Enter the number you want to find "<<endl;
	cin>>k;
	int data=binary_search(array,3,3,k);
	cout<<data;
	return 0;
}
