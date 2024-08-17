#include <iostream>
using namespace std;
bool binary_recursion(int array[],int start,int end,int n){
	int mid=start+(end-start)/2;
	if(start>end){
		return false;
	}
	if(array[mid]==n){
		return true;
	}
	if(array[mid]<n){
		return binary_recursion(array,mid+1,end,n);
	}
	else{
		return binary_recursion(array,start,mid-1,n);
	}
}
int main(){
	int array[9]={1,2,3,4,5,6,7,8,9};
	int start=0;
	int size=sizeof(array)/sizeof(array[0]);
	cout<<"enter the number you want to search"<<endl;
	int n;
	cin>>n;
	bool data=binary_recursion(array,start,size-1,n);
	cout<<data<<endl;
	return 0;
}
