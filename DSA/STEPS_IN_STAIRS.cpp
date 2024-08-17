#include <iostream>
using namespace std;

int stairs(int a){
	if(a==0){
		return 0;
	}
	if(a==1){
		return 1;
	}
	int data=stairs(a-1)+stairs(a-2);
	return data;
}

int main(){
	int a=10;
	int data_two=stairs(a);
	cout<<data_two<<endl;
	return 0;
}
