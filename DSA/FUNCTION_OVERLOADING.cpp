//IN THIS PROGRAM WE ARE GOING TO LEARN ABOUT THE FUNCTION OVERLOADING WITH DIFFERINT PARAMITER

#include <iostream>
using namespace std;

class a{
	public:
	void sum(){
		cout<<"This is the program where we are having sum"<<endl;
	}
	void sum(int a,int b){
		cout<<"The sum of a and b is "<<a+b<<endl;
	}
	void sum(int a,int b,int c){
		cout<<"The sum of a,b and c is "<<a+b+c<<endl;
	}
};

int main(){
	a b;
	b.sum();
	b.sum(1,2);
	b.sum(1,2,3);
	return 0;
}
