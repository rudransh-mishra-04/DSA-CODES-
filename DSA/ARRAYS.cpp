#include <iostream>
using namespace std;

void printArray(int arr[],int size){
	cout<<"Printing the array"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"Printing done"<<endl;
}

int main(){
	int third[10]={2,3};
	int n=12;
	printArray(third,12);
	int forth[30]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99};
	n=30;
	printArray(forth,30);
}
