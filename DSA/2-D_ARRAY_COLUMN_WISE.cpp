#include <iostream>
using namespace std;

int main(){
	int array[3][3];
	cout<<"Enter the array "<<endl;
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			cin>>array[j][i];
		}
	}
	cout<<"Now printing the 2-D array "<<endl;
	cout<<"The below given array is printed in the from of row to column "<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
}
	
	return 0;
}
