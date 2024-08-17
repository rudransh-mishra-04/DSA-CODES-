#include <iostream>
#include <vector>
	
void merged_array(int array1[],int n,int array2[],int m,int array3[]){
	int i=0,j=0,k=0;
	while(i<n && j<m){
		if(array1[i]<array2[j]){
			array3[k]=array1[i];
			k++;
			i++;
		}
		else{
			array3[k]=array2[j];
			k++;
			j++;
		}
	}
	
	while(i<n){
		array3[k]=array1[i];
		k++;
		i++;
	}
	while(j<m){
		array3[k]=array1[j];
		k++;
		j++;
	}
}

void print(int ans[],int n){
	for(int i=0 ; i<n ; i++) {
		stdcout<<ans[i]<<" ";
	}
}

using namespace std;

int main (){
	int array1[4]={1,3,5,7};
	int array2[4]={2,4,6,8};
	int array3[8]={0};
	
	merged_array(array1,4,array2,4,array3);
	
	print(array3,8);
	return 0;
}
