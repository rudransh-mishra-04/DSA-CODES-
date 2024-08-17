#include <iostream>
using namespace std;

int get_max(int a[],int n){
	
	int maximum= INT_MIN;
	
	for(int i=0;i<n;i++){
	maximum=max(maximum,a[i]);	//THESE ARE THE PRE DEFINED FUNCTIONS WHICH HELP IN MAKING OF THE CODE 
	}
	
	return maximum;
}

int get_min(int a[],int n){
	
	int minimum= INT_MAX;
	
	for(int i=0;i<n;i++){
		minimum=min(minimum,a[i]);  //THESE ARE THE PRE DEFINED FUNCTIONS WHICH HELP IN MAKING OF THE CODE 
	}
	
	return minimum;
}

int main(){
	int a;
	cout<<"Input the size of the array "<<endl;
	cin>>a;
	int array[100];
	cout<<"Enter the elements upto "<<a<<" number of elements "<<endl;
	for(int i=0;i<a;i++){
		cin>>array[i];
	}
	cout<<"The maximum is "<<get_max(array,a)<<endl;
	cout<<"The minimum is "<<get_min(array,a);
}
