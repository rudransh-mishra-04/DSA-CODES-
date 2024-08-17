// THIS PROBLEM INLCUDE THE TOPICS ABOUT THE PIVOT 
#include <iostream>
using namespace std;

int pivot(int arr[],int size){
	
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int count=0;
	
	while(start<end){
		if(arr[mid]>=arr[0]){
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
	int array[5]={7,9,1,2,3};

	int data=pivot(array,5);
	cout<<data<<endl;
	return 0;
}
