#include <iostream>
using namespace std;

void reverse(int array[],int n){
	for(int i=n-1;i>=0;i--){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void print(int array[],int n){
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int array[10]={12,23,46,54,88,21,5,3,63,7};
	cout<<"The array before reversing"<<endl;
	print(array,10);
	cout<<"The array after reversing "<<endl;
	reverse(array,10);
	return 0;
}
