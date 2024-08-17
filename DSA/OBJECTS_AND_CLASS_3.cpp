#include <iostream>
using namespace std;

class hero{
	private:
		int age=100;
	public:
		//this is a default constructer 
		hero(){
			cout<<"The constructer is called"<<endl;
		}
		hero(int age){
			this->age =age;
		}
		int getage(){
			return age;
		}
};

int main(){
	//the object is created statically
	hero h1;
	//the object is creatd dynamically
	cout<<"The age is "<<h1.getage()<<endl;
	//the constructer will get called one for this also
//	hero *a=new hero; 
	return 0;
}
