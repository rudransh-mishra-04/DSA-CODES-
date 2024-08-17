#include <iostream>
using namespace std;

void insersion_sort(int arr[],int n){
	for(int i=1;i<n-1;i++){
		int temp=arr[i];
		int j;
		for(j=i-1;j>=0;j--){
			//SHIFT THE VALUES 
			if(arr[j]>temp){
				arr[j+1]=arr[j];
			}
		else {
			break;
		}
		arr[j+1]=temp;
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
	insersion_sort(array,10);
	cout<<endl;
	print(array,10);
	return 0;
}
