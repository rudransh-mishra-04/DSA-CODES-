#include <iostream>
using namespace std;

class A{
	public:
		void sayHello(){
			cout<<"hello rudransh "<<endl;
		}
				void sayHello(string name){
			cout<<"hello "<<name<<endl;
		}
};

int main(){
	A a;
	a.sayHello();
	return 0;
}
