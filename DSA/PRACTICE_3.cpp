#include <iostream>
using namespace std;

int Selection_sort(int *array,int size){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(array[i]>array[j]){
				swap(array[i],array[j]);
			}
		}
	}
}
void print(int *array,int size){
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int array[8]={12,34,56,234,6,76,42,66};
	int size=sizeof(array)/sizeof(array[0]);
	cout<<"The array before the sorting "<<endl;
	print(array,size);
	cout<<"The array after the sorting "<<endl;
	Selection_sort(array,size);
		print(array,size);
	return 0;
}
