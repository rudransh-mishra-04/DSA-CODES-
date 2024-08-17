#include <iostream>
using namespace std;

void input(int array[],int n){
	cout<<"Enter the array elements "<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
}
void print(int array[],int n){
	cout<<"The entered elements are "<<endl;
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int binary_search(int array[],int n){
	int start=0;
	int end=n-1;
	int mid=start+(end-start)/2;
	while(start<=end){
		if(array[mid]==n){
			return mid;
		}
		if(array[mid]>n){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}

int main(){
	int n,a;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int array[n];
	input(array,n);
	print(array,n);
	cout<<"Enter the element that you want to search as a binary search tree"<<endl;
	cin>>a;
	int data=binary_search(array,n);
	if(data==-1){
		cout<<"The number dose not exist in the array"<<endl;
	}
	else{
		cout<<"The number is in the array "<<endl;
	}
	return 0; 
}
