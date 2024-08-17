// BASIC EXAMPLE OF SWITCH CASE 

/*#include <iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	switch(num){
		case 1:cout<<"This is first"<<endl;
		break;
		case 2:cout<<"This is second"<<endl;
		break;
		default: cout<<"This is the default case"<<endl;

	}
}
*/

// CALCLUATOR 

/*
#include <iostream>
using namespace std;
int main(){
	int a,b,op;
	cout<<"Enter the first number "<<endl;
	cin>>a;
	cout<<"Enter the second number "<<endl;
	cin>>b;
	cout<<"Choose the following operation "<<endl;
	cout<<"For multipication 1"<<endl;
	cout<<"For addition 2"<<endl;
	cout<<"For substraction 3"<<endl;
	cout<<"For division 4"<<endl;
	cin>>op;
	switch(op){
		case 1:cout<<"The opration is multiplication and the solution is "<<(a*b)<<endl;
		break;
		case 2:cout<<"The opration is addition and the solution is "<<(a+b)<<endl;
		break;
		case 3:cout<<"The opration is substraction and the solution is "<<(a-b)<<endl;
		break;
		case 4:cout<<"The opration is division and the solution is "<<(a/b)<<endl;
		break;
	}
}
*/

// TOTAL NOTE COUNTER 
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the amount "<<endl;
	cin>>n;
	switch(1){
		case 1:cout<<"The total number of 100 notes are :- "<<(n/100)<<endl;
		case 2:cout<<"The total number of 50 notes are :- "<<((n%100)/50)<<endl;
    	case 3:cout<<"The total number of 20 notes are :- "<<(((n%100)%50)/20)<<endl;
		case 4:cout<<"The total number of 10 notes are :- "<<((((n%100)%50)%20)/10)<<endl;
		break;
	}
}
