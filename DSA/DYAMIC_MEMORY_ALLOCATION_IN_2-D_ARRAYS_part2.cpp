#include <iostream>
using namespace std;

int main(){
	// initilaziation 
	
	int n,m;
	cout<<"Enter the size of the rows "<<endl;
	cin>>n;
	cout<<"Enter the size of the columns "<<endl;
	cin>>m;
	int ** array = new int *[n];
	for(int i=0;i<m;i++){
		array[i]= new int[m];
	}
	cout<<endl;
	//taking input 
	cout<<"Enter the elements in the array "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	cout<<endl;
	//printing the array 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
