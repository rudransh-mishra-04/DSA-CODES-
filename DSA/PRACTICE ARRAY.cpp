#include <iostream>
using namespace std;

void print_array(int array[],int n){
	for(int i=0;i<n;i++){
	cout<<array[i]<<" ";
	}
}

void reverse(int array[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
	swap(array[start],array[end]);
	start++;
	end--;
	}
	
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	cout<<"The array currently is "<<endl;
	
	print_array(arr,10);
	
	cout<<endl;
	
	cout<<"Now after reversing the array "<<endl;
	
	reverse(arr,10);
	
	print_array(arr,10); // WE HAVE USED THE SAME PRINT FUNCTION BECAUSE IT WILL UPDATE THE NEW ARRAY
	
	return 0;
}
