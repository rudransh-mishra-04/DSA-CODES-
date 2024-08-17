#include <iostream>
using namespace std;

class animal{
	public:
		int age;
		int weight;
		
	public:
		void speak(){
			cout<<"speaking"<<endl;
		}
			void span(){
		cout<<"they live mostly in the house"<<endl;
	}
};

class dog:public animal{

};
class cat:public dog{
	
};

int main(){
	dog d;
	d.speak();
	cat c;
	c.speak();
	return 0;
}
