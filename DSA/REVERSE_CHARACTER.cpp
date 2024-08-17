#include <iostream>
using namespace std;

void reverse(char name[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
		swap(name[start++],name[end--]);
	}
}

int get_length(char name[]){
	int count=0;
	for(int i=0; name[i]!='\0';i++){
		count++;
	}
	return count;
}

int main(){
	char name[20];
	cout<<"Enter the name of the student "<<endl;
	cin>>name;
	cout<<"The length of the character is "<<get_length(name)<<endl;
	
	cout<<endl;
	reverse(name,get_length(name));
	cout<<"The reverse of the string is "<<name;
	
	return 0;
}
