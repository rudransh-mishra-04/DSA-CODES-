#include <iostream>
using namespace std;

void selection_sort(int arr[],int n){
	//TRAVERSING THE ENTIRE ARRAY 
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
}

int main(){
	int array[10]={1,54,23,5,2,6,12,66,8,53};
	cout<<"The array before sorting "<<endl;
	print(array,10);
	cout<<endl;
	cout<<"The array after sorting "<<endl;
	selection_sort(array,10);
	print(array,10);
	return 0;
}


