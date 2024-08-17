#include <iostream>
using namespace std;

int main(){
	cout<<"This is the calcluator program for two numbers "<<endl;
	int a,b,c;
	cout<<"Enter the number a"<<endl;
	cin>>a;
	cout<<"Enter the number b"<<endl;
	cin>>b;
	cout<<"For multlipication choose 1"<<endl;
	cout<<"For division choose 2"<<endl;
	cout<<"For addition choose 3"<<endl;
	cout<<"For substraction choose 4"<<endl;
	cin>>c;
	if(c==1){
		cout<<"The result is "<<a*b<<endl;
	}
	if(c==2){
		cout<<"The result is "<<a/b<<endl;
	}
	if(c==3){
		cout<<"The result is "<<a+b<<endl;
	}
	if(c==4){
		cout<<"The result is "<<a-b<<endl;
	}
}
