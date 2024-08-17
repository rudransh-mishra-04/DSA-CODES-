#include <iostream>
using namespace std;

void print(int n,string array[]){
	if(n==0){
		return;
	}
		int data =n%10;
		n=n/10;
		print(n,array);
		cout<<array[data]<<" ";
}

int main(){
	int a;
	string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	cout<<"Enter the number "<<endl;
	cin>>a;
	print(a,array);
	return 0;
}
