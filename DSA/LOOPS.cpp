#include <iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter the character"<<endl;
	cin>>ch;
	if (ch >='a' && ch <= 'z'){
		cout<<"The character is in lower case"<<endl;
	}
	if(ch>= 'A' &&ch <= 'Z'){
		cout<<"The character is in upper case"<<endl;
	}
	if(ch >= '0' && ch <= '9' ){
		cout<<"The character is a numerical value"<<endl;
	}
}
