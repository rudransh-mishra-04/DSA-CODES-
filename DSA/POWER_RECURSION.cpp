#include <iostream>
using namespace std;

int power(int a,int b){
	int prd=1;
	if(b==0 || a==1){ 
	//THIS IS A BASE CASE WHEN THE RECURISON COMES TO THIS POINT IT WILL COME TO STOP
		return 1;
	}
	return prd=a*power(a,b-1);//THIS WILL CALCLUATE THE TOTAL VALUE 
}

int main(){
	int a,b;
	cout<<"Enter the number a"<<endl;
	cin>>a;
	cout<<"Enter the power of b"<<endl;
	cin>>b;
	int data=power(a,b);
	cout<<data<<endl;
	return 0;
}
