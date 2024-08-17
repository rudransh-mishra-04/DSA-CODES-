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

int search(int arr[][3],int m,int n,int k){
		for(int i=0;i<m;i++){
		 for(int j=0;j<n;j++){
		 	if(arr[i][j]==k){
		 		return 1;
			 }
		}
	}
	return -1;
}

int main(){
	int array[3][3];
	int k;
	input(array,3,3);
	print(array,3,3);
	cout<<"Enter the element to search "<<endl;
	cin>>k;
	int data=search(array,3,3,k);
	if(data==1){
		cout<<"The element is in the array "<<endl;
	}
	else{
		cout<<"The element is not in the array "<<endl;
	}
	return 0;
}
