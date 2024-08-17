#include <iostream>
using namespace std;

void print(int array[],int n){
	for(int i:array){
		cout<<i<<" ";
	}
	cout<<endl;
}

int main(){
	int array[10]={12,5,743,62,4,23,4,34,741,67};
	int size=sizeof(array)/sizeof(array[0]);
	print(array,size);
	return 0;
}
