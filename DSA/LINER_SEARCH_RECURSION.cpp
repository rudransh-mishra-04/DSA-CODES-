#include <iostream>
using namespace std;

bool liner_search(int array[],int size,int n){
	if(size==0){
		return false;
	}
	if(array[0]==n){
		return true;
	}
	else{
			bool data =liner_search(array+1,size-1,n);
	}
}

int main(){
	int array[5]={1,34,345,64,35};
	int size=sizeof(array)/sizeof(array[0]);
	int n;
	cout<<"Enter the number you want to search "<<endl;
	cin>>n;
	bool data=liner_search(array,size,n);
	cout<<data<<endl;
	if(data==0){
		cout<<"The array is empty or the desired number is not preasent in the array "<<endl;
	}
	else{
		cout<<"The number is in the array "<<endl;
	}
	return 0;
}
