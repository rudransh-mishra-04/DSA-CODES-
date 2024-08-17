#include <iostream>
using namespace std;

int merged(int ar1[],int n,int ar2[],int m,int ar3[]){
	int i=0,j=0;
	int k=0;
	while(i<n && j<m){
		if(ar1[i]<ar2[j]){
			ar3[k]=ar1[i];
			k++;
			i++;
		}
		else{
			ar3[k]=ar2[j];
			k++;
			j++;
		}
	}
	while(i<n){
		ar3[k]=ar1[i];
		k++;
		i++;
	}
	while(k<n){
		ar3[k]=ar2[j];
		k++;
		j++;
	}
}

void print(int array[],int n){
		for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
}

int main(){
	int ar1[4]={1,3,5,7};
	int ar2[3]={2,4,6};
	int ar3[7]={0};
	merged(ar1,4,ar2,3,ar3);
	print(ar3,8);
	return 0;
}
