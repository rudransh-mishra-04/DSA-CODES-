#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
	for(int i=0;i<n;i++){
	//FOR ROUND 1 TO N-1
		for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		}
	}
	
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
}

int main(){
	int array[10]={1,6,2,74,9,14,56,7,34,32};
	print(array,10);
	cout<<endl;
	bubble_sort(array,10);
	cout<<endl;
	print(array,10);
	return 0;
}
