//#include <iostream>
//using namespace std;
//
//string reverse(string str){
//	string result;
//	for(int i=str.length()-1;i>=0;i--){
//		result += str[i];
//	}
//	return result;
//}
//
//int main(){
//	string str={"rudransh mishra"};
//	string data = reverse(str);
//	cout<<"The reverse is "<<data<<endl;
//	return 0;
//}

 

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	string name={"rudransh"};
	cout<<"Before reverse"<<endl;
	cout<<name<<endl;
	reverse(name.begin(),name.end());
	cout<<"After reverse"<<endl;
	cout<<name<<endl;
}
