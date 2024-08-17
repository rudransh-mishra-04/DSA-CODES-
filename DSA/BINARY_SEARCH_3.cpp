#include <iostream>
using namespace std;

int mountain(int array[],int size){
	
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	
	while(start<end){
		
	if(array[mid]<array[mid+1]){
		start=mid+1;
	}
	
	else
	{
		end=mid;
	}
	mid=start+(end-start)/2;
	}	
	return start;
}

int main(){
	int arr[12]={1,2,3,4,5,5,6,7,8,9,2,1};
	int data=mountain(arr,12);
	cout<<"The peak is at the index "<<data<<endl;
	return 0;
}

