//THIS CODE IS FOR THE LINER SEARCH THROUGH THE UNSORTED ARRAY
#include <iostream>
using namespace std;

bool Liner_Search(int *array,int data,int size){
	for(int i=0;i<size;i++){
		if(data==array[i]){
			return 1;
		}
	}
	return 0;
}

int main(){
	int array[6]={12,534,7,34,78,2};
	int n;
	cout<<"Enter the number you want to search in the array "<<endl;
	cin>>n;
	int size=sizeof(array)/sizeof(array[1]);
	bool data=Liner_Search(array,n,size);
	if(data==1){
		cout<<"The number is in the array "<<endl;
	}
	else{
		cout<<"The number is not in the array"<<endl;
	}
	return 0;
}
