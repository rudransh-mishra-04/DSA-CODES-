//THIS IS THE CODE FOR BUBBLE SORT AND WE ARE USING THE CONCEPT OF RECURSION IN THIS 
#include <iostream>
using namespace std;

void sort_array(int *array,int n){
	//BASE CASE 
	if(n==1 || n==0){
		return;
	}
	//THIS WILL SHIFT THE LARGEST ELEMENT TO THE END 
	for(int i=0;i<n-1;i++){
		if(array[i]>array[i+1]){
			swap(array[i],array[i+1]);
		}
	}
	sort_array(array,n-1);
}

void print(int *array,int n){
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int array[5]={23,534,2,7,3};
	cout<<"Before the sorting "<<endl;
	print(array,5);
	cout<<"After sorting "<<endl;
	sort_array(array,5);
	print(array,5);
	return 0;
}
