//IN THIS PROGRAM WE ARE GOING TO DISCUSS ABOUT THE (this) KEYWORD AND CREATE A PROGRAM WITH IT

#include <iostream>
using namespace std;

/*
class hero{
	public:
		int data=100;
		
//HERE THE NAME OF PARAMETER AND THE AND THE DATA IS COMMON SO IT WILL CREATE A PROBLEM

		hero(int data){
			data=data;
		}
};
*/

//CORRECT WAY AND USING THE (this) ELEMENT 

class hero{
	int data;
	hero(int data){
		cout<<"The address inside this is "<<this<<endl;
		this->data=data; //HERE THIS WILL STORE THE ADDRESS OF CURRENT OBJECT
	}
};

int main(){
	hero h(int a);
	cout<<"The address of h is "<<&h<<endl;
	return 0;
}
