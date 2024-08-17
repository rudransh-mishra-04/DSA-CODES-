#include <iostream>
using namespace std;

void update_one(int n){
	n++;
}

void update_two(int& n){
	n++;
}
int main(){
	
//THIS IS THE COMMENT 

//	int i=10;
//	int&j=i;
//	cout<<i<<endl;
//	cout<<j<<endl;
//	i++;
//	cout<<i<<endl;
//	j++;
//	cout<<i<<endl;

// THIS IS THE PART FOR REFRENCE VARIABLE :-
int a=10;
cout<<"Before update function one "<<a<<endl;
update_one(a);
cout<<"After update function one "<<a<<endl;
cout<<endl;
cout<<"Before update function two "<<a<<endl;
update_two(a);
cout<<"After update function two  "<<a<<endl;
}
