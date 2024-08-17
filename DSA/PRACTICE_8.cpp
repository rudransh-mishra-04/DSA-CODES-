#include<iostream>
using namespace std;

void insertion(int array[],int size){
	for(int i=1;i<size;i++){
		int data=array[i];
		
		int j=i-1;
		
		while(j>=0 && array[j]>data){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=data;
	}
}

void print(int array[],int size){
	for(int i=0;i<size-1;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int array[10]={12,82,53,83,92,34,87,22,66,89};
	int size=10;
	print(array,size);
	insertion(array,size);
	print(array,size);
	return 0;
}
