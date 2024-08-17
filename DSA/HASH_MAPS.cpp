#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
	//CREATION 
	unordered_map<string,int>m;
	
	//insertion 
	
	//way number 1
	pair<string,int>p=make_pair("Rudransh",1);
	m.insert(p);
	
	//way number 2
	m["amrit"]=2;
	
	for(auto it=m.begin(); it!=m.end(); it++){
		cout<<it->first;
		cout<<" "<<it->second;
		cout<<endl;
	}
	//Another way of printing 
	cout<<m["Rudransh"]<<endl;
	cout<<m.at("Rudransh")<<endl;
	
	//Check if something is in the maps
	cout<<m.count("Rudransh")<<endl;
	
	//Iterator 
	unordered_map<string,int> :: iterator it=m.begin();
	
	while(it!=m.end()){
		cout<<it->first <<" "<<it->second<<endl;
		it++;
	}
	return 0;
	
}
