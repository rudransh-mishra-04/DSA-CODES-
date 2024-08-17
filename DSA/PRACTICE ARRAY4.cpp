#include <iostream>
using namespace std;

void fill_array(int arr[],int n){   // THIS IS TAKING INPUT OF THE ARRAY 
	cout<<"Enter the elements in an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

void print_array(int arr[],int n){ // IN THIS FUNCTION WE ARE PRINTING THE ARRAY 
	cout<<"The elements in an array are:- "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void reverse(int arr[],int n){  // IN THIS FUNCTION WE ARE REVERSING THE ARRAY 
	int start=0;
	int end=n-1;
	for(int i=0;i<n;i++){
		while(start<end){
			swap(arr[start],arr[end]);
			start++;
			end--;
		}
	}
}

int main(){
	int n;
	int array[n];
	cout<<"Enter the size of the array "<<endl;
	cin>>n;
	fill_array(array,n);
	print_array(array,n);
	reverse(array,n);
	cout<<endl;
	print_array(array,n);
}
