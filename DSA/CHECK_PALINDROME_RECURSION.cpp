#include <iostream>
using namespace std;

bool check_palindrome(string str,int i,int j){
	if(i>j){
		return true;
	}
	if(str[i]==str[j]){
		return true;
	}
	else{
		return false;
	}
	i++;
	j--;
	check_palindrome(str,i,j);
}

int main(){
	string str="abbac";
	int i=0;
	int j=str.length();
	bool data =check_palindrome(str,i,j-1);
	if(data!=1){
		cout<<"Not a palindrome"<<endl;
	}
	else{
		cout<<"Is a palindrome"<<endl;
	}
	return 0;
}
