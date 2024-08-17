#include <iostream>
#include <stack>
using namespace std;
int main(){
	string st={"rudransh"};
	stack<char>str;
	for(auto i=0;i<st.length();i++){
		auto ch=st[i];
		str.push(ch);
	}
	string ans="";
	while(!str.empty()){
		char ch=str.top();
		ans.push_back(ch);
		str.pop(); 
	}
	cout<<"The reversed string is "<<ans<<endl;
	return 0;
}
