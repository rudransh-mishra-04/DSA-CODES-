#include <iostream>
using namespace std;

void print_array(int array[],int n){
	for(int i=0;i<n;i++){
	cout<<array[i]<<" ";
	}
}

void alt_swap(int array[],int n){
	int first=0;
	int second=first+1;
	int end=n-1;
	while(first<=end && second<=end){
		swap(array[first],array[second]);
		first++;
		first++;
		second++;
		second++;
	}
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	print_array(arr,10);
	cout<<endl;
	alt_swap(arr,10);
	print_array(arr,10);
}
