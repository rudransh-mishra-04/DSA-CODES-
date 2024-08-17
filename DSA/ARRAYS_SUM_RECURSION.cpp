#include <iostream>
using namespace std;

int sumOfArrays(int array[],int size){
	if(size==0){
		return 0;
	}
	return array[0]+sumOfArrays(array+1,size-1);
}

int main(){
	int array[5]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	int data =sumOfArrays(array,size);
	cout<<data<<endl;
	return 0;
}
