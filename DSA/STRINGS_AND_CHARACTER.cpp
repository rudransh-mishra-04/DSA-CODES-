#include <iostream>
using namespace std;

int main(){
	char ch[20];
	cout<<"Enter your name"<<endl;
	cin>>ch;
//	ch[3]='\0';
//	cout<<"Your name before the third index is "<<endl;
//	cout<<ch;
	int a=0;
	for(int i=0; ch[i]!='\0';i++){
		a++;
	}
	cout<<"The length of the character is "<<a<<endl;
	return 0;
}
