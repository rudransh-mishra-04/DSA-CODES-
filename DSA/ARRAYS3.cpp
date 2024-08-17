#include <iostream>
using namespace std;

int get_max(int a[],int n){
	
	int maximum= INT_MIN; //FIRSTLY WE HAVE STORED THE MINIMUM VALUE IN THE MAXIMUM THEN WE PUT THE ARRAY 
	//IN A LOOP AND IF WE FIND ANY VALUE LARGER THEN THE MAXIMIM WE WILL STORE IT.
	
	for(int i=0;i<n;i++){
		if(a[i]>maximum){
			maximum=a[i];
		}
		
	}
	
	return maximum;
}

int get_min(int a[],int n){
	
	int minimum= INT_MAX;
	
	for(int i=0;i<n;i++){
		if(a[i]<minimum){
			minimum=a[i];
		}
		
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
