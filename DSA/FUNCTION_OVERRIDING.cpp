//THIS IS CODE WE ARE LEARNING ABOUT THE FUNCTION OVERRIDING 

#include <iostream>
using namespace std;

class animal{
	public:
	void speak(){
		cout<<"This is sparent class"<<endl;//BOTH THE FUNCTION HAVE SAME NAME 
	}
};

class human : public animal{
	public:
	void speak(){
		cout<<"The human is speaking "<<endl;//BOTH THE FUNCTION HAVE SAME NAME
	}
};

int main(){
	human h;
	h.speak();// WHEN WE WILL CALL THE FUNCTION THE HUMAN WILL DO THE WORK BECAUSE IT WILL HAVE HIGHER PRIORITY
	return 0;
}
