//IN THIS CASE WE ARE DEALING THE QUICK SORT AND UNDERSTAND ITS WORKING 
#include <iostream>
using namespace std;

int partion(int arr[],int s,int e){
	int pivot=arr[s];
	int count=0;
	for(int i=s+1;i<=e;i++){
		if(arr[i]<=pivot){
			count++;
		}
	}
	//it will place the pivot at the right index 
	int pivot_index=s+count;
	swap(arr[pivot_index],arr[s]);
	
	//till here we have found the pivot and placed it in the right place 
	//now we are going to swap the other elements that are in the wrong place 
	
	int i=s,j=e;
	while(i<pivot_index && j>pivot_index){
		while(arr[i]<=pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<pivot_index && j>pivot_index){
			swap(arr[i++],arr[j--]);
		}
	}
	return pivot_index;
}

void quickSort(int arr[],int s,int e){
	//base case 
	if(s>=e){
		return;
	}
	//time for partition 
	int p =partion(arr,s,e);
	
	//sorting left part 
	quickSort(arr,s,p-1);
	
	//sorting right part 
	quickSort(arr,p+1,e);
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[5]={2,4,1,6,9};
	int n=5;
	quickSort(arr,0,n-1);
	print(arr,n);
	return 0;
}
