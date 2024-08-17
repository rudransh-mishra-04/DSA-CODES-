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

void row_sum(int arr[][3],int m,int n){
	int sum[m]={};
		for(int i=0;i<m;i++){
		 for(int j=0;j<n;j++){
		 	sum[i]=arr[i][j]+sum[i];
		}
	}
	
	for(int i=0;i<m;i++){
		cout<<"The sum of row "<<i+1<<" ";
		cout<<sum[i]<<" "<<endl;
	}
}

int main (){
	int array[3][3];
	int k;
	input(array,3,3);
	print(array,3,3);
	row_sum(array,3,3);
	return 0;
}
