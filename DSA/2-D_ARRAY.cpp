#include <iostream>
using namespace std;

int main(){
	int array[3][3];
	
//	ANOTHER WAY TO CREATE AN 2-D ARRAY
int arry[3][3]={{1,11,111},{2,22,222},{3,33,333}};
	
	cout<<"Enter the array "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>array[i][j];
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
cout<<endl;
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arry[i][j]<<" ";
		}
		cout<<endl;
}
	
	return 0;
}
