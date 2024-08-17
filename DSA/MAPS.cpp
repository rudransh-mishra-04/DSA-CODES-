#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	map<string,int> marks;
	marks["rudransh"]=100;
	marks["asmit"]=10;
	marks["amrit"]=0;
	marks["itish"]=13;
	
	map<string,int>:: iterator itr;
	for(itr=marks.begin(); itr!=marks.end();itr++){
		cout<<(*itr).first<<" "<<(*itr).second<<" \n";
	}
	
	return 0;
}

