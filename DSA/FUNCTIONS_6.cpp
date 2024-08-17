//FIBONACHI SERIES USING FUNTION 
//VIDEO NUMBER 8 TIME 1 HOUR 8 MINUTES 

#include <iostream>
using namespace std;

int fibo(){
	int n;
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	int a=0,b=1;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=a+b;
		a=b;
		b=sum;
		cout<<"  "<<sum;
	}
}

int main(){
	int num=fibo();
}
