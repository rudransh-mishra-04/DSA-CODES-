//ARITHMATIC PROGRESSION USING FUNCTION IN VIDEO NUMBER 8 TIME 1 HOUR 8 MINUTES
//FORMULA FOR AP IS :- AP=((3*n+7)
#include <iostream>
using namespace std;
int ap(){
	int n;
	cout<<"Enter the value for n"<<endl;
	cin>>n;
	int d=((3*n)+7);
	return d;	
}
int main(){
	int resul=ap();
	cout<<"The output is "<<resul<<endl;
}
