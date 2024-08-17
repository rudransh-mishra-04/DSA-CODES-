#include <iostream>
using namespace std;
int find_sum(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}

int main(){
	int a;
	cout<<"Enter the size of the array"<<endl;
	cin>>a;
	int array[100];
	cout<<"Enter the array"<<endl;
	for(int i=0;i<a;i++){
		cin>>array[i];
	}
		cout<<endl;
	cout<<"The array"<<endl;
	for(int i=0;i<a;i++){
		cout<<array[i]<<" ";
	}
		cout<<endl;
	cout<<endl;
	cout<<"The sum of all the elements in an array is "<<find_sum(array,a)<<endl;
}
