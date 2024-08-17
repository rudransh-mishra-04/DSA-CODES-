//IN THIS PROGRAM WE SHIFT ALL THE ZEROS AT THE END 
#include <iostream>
using namespace std;

void zeros(int array[],int n){
	int i=0;
	for(int j=0;j<n;j++){
		if(array[j]!=0){
			swap(array[j],array[i]);
			i++;
		}
	}
}

void print(int ans[],int n){
	for(int i=0 ; i<n ; i++) {
		cout<<ans[i]<<" ";
	}
}

int main(){
	int array[8]={1,0,4,0,5,0,0,7};
	zeros(array,8);
	print(array,8);
	return 0;
}
