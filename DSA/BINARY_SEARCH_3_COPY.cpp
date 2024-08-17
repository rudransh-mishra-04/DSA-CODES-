#include <iostream>
using namespace std;

int mountain(int arr[],int size){
	
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	
	while(start<end){
		if(arr[mid]<arr[mid+1]){
			start=mid+1;
		}
		else{
			end=mid;
		}
		mid=start+(end-start)/2;
	}
	return start;
}

int main(){
	int array[5]={1,2,3,4,1};
	
	int data=mountain(array,5);
	cout<<data<<endl;
	return 0;
}
