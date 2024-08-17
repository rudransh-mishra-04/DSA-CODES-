#include <iostream>
using namespace std;


void fill_array(int arr[],int n){   // THIS IS TAKING INPUT OF THE ARRAY 
	cout<<"Enter the elements in an array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

int pair_sum(int arr[],int n){
	int s=5,q=0;
	int k[q];
	int l[q];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==s){
				k[q]=arr[i];
				l[q]=arr[j];
				q++;
			}
		}
	}
	return k[q],l[q];
}

int main(){
	int n;
	int array[n];
	cout<<"Enter the size of the array "<<endl;
	cin>>n;
	fill_array(array,n);
	
	int data=pair_sum(array,n);
	cout<<data;
}
