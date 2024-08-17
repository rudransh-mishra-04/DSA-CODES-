#include <iostream>
using namespace std;

void reach_home(int src,int dest){
	//base case
	if(src==dest){
		cout<<"reached"<<endl;
		return;
	}
	//recursive call
	src++;
	cout<<"steps taken "<<src<<endl;
	reach_home(src,dest);
}

int main(){
	int dest=10;
	int src=0;
	reach_home(src,dest);
	return 0;
}
