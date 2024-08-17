#include <iostream>
using namespace std;

int palindrome(char word[],int n){
	int start=0;
	int end=n-1;
	while(start<end){
		if(word[start++]!=word[end--]){
			return -1;
		}
	}
	return 1;
}

int get_length(char name[]){
	int count=0;
	for(int i=0; name[i]!='\0';i++){
		count++;
	}
	return count;
}

int main(){
	char word[20];
	cout<<"Enter the word to check for palindrome "<<endl;
	cin>>word;
	cout<<"Original word "<<word<<endl;
	int b=get_length(word);
	int a =palindrome(word,b);
	if(a==1){
		cout<<"The numer is a palindrome"<<endl;
	}
	else{
		cout<<"The numer is not an palindrome "<<endl;
	}
	return 0;
}
