//IN THIS CODE WE ARE GOING TO TALK ABOUT THE COPY CONSTRUCTER 

#include <iostream>
using namespace std;

class hero{
	public:
		int a=100;
		int b=200;
		//THIS IS FOR THE DEFAULT CONSTRUCTER 
		hero(){  
			cout<<"This is a default constructer"<<endl;
		}
		//THIS IS FOR PARAMATRISED CONSTRUCTER 
		hero(int a,int b){
			cout<<"The constructer is invoked"<<endl;
			this->a=a;
			this->b=b;
		}
		//THIS IS THE PRINTING FUNCTION TO PROVE THE COPY CONSTRUCTER
		void print(){
			cout<<"The value of a is "<<this->a<<endl;
			cout<<"The value of b is "<<this->b<<endl;
		}
};

int main(){
	hero a;
	hero b(100,200);
	a.print();
	hero c(b);
	c.print();
	return 0;
}
