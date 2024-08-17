#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int key){
	
	int start=0;
	int end=size-1;
	
	int mid=(start+end)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			return mid;
		}
		// GO TO RIGHT VALA PART IN THE BINARY SEARCH
		
		if(key>arr[mid]){
			start=mid+1;	
		}
		else{
			end=mid-1;
		}
		mid=(start+end)/2;
	}
	return -1;
}

int main(){
	int even[6]={2,4,6,8,12,18};
	int odd[5]={3,8,11,14,16};
	int data1=binary_search(even,6,12);
	int data2=binary_search(odd,5,11);
	cout<<"index for even number of elements "<<data1<<endl;
	cout<<"index for odd number of elements  "<<data2<<endl;
	return 0;
}


