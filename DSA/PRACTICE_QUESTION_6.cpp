#include <iostream>
using namespace std;

int binary(int array[],int size,int n){
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<end){
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
	int array[9]={1,2,3,4,5,6,7,8,9};
	int n;
	cout<<"Enter the you want to search for "<<endl;
	cin>>n;
	int data=binary(array,9,n);
	if(data!=-1){
		cout<<"The number is in the array and at the index of "<<data<<endl;
	}
	else{
		cout<<"The number is not in the array "<<endl;
	}
	return 0;
}
