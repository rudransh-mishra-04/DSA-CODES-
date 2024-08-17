#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
		}
			return 0;
	}


int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"If the element is in the array it will give 1 else it will give 0"<<endl;\
	cout<<endl;
	int n;
	cout<<"Enter the number you want to search "<<endl;
	cin>>n;
	bool found= search(arr,10,n);
	if(found ){
		cout<<"The number is in the array "<<endl;
	}
	else{
		cout<<"The number is not in the array"<<endl;
	}
}
