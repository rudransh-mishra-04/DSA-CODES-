#include <iostream>
using namespace std;

int main(){
	int  array[5]={10,2,3,4,5};
	char ch[5]="abcd";
	
	cout<<array<<endl;
	cout<<ch<<endl;
	
	int *ptr=&array[0];
	
	char *pp=&ch[0];
	
	cout<<*ptr<<endl;
	cout<< ptr<<endl;
	cout<<*(pp+1)<<endl;
	cout<<pp<<endl;
	
	char temp='z';
	char *cd=&temp;
	
	cout<<cd<<endl;
	
	return 0;
}
