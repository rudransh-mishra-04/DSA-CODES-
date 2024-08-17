//IN THIS PROGRAM WE WILL CHECK FOR INHERITANCE AMBUGITY
#include <iostream>
using namespace std;
//THIS IS CLASS NUMBER 1
class a{
	public:
		void print(){
			cout<<"This is A"<<endl;
		}
};
//THIS IS CLASS NUMBER 2
class b{
	public:
		void print(){
			cout<<"This is B"<<endl;
		}
};
//THIS CLASS WILL TAKE INHERITANCE FROM TWO CLASS HAVING SAME OBJECT	
class c: public a,public b{
};

int main(){
	c s;
	s.a::print();
	s.b::print();
	return 0;
}
