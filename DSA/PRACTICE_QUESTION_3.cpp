#include <iostream>
using namespace std;

void print (int a){
	for(int i=0;i<=a;i++){
		cout<<"The number is "<<i<<endl;
	}
}

int main(){
	int a;
	cout<<"Enter the number a "<<endl;
	cin>>a;
	print(a);
	return 0;
}
