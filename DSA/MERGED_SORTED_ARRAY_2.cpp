#include <iostream>
using namespace std;

void merged(int array1[],int n,int array2[],int m){
	int i=0,j=0;
	while(i<n && j<m){
		if(array1[i]<array2[j]){
			array1[i]=array1[i];
			i++;
		}
		else{
			array1[i+1]=array1[i];
			array1[i]=array2[j];
			j++;
		}
	}
}

void print(int ans[],int n){
	for(int i=0 ; i<n ; i++) {
		cout<<ans[i]<<" ";
	}
}

int main (){
	int array1[6]={1,2,3};
	int array2[3]={2,5,6};
	
	merged(array1,6,array2,3);
	print(array1,6);
	return 0;
}
