//IN THIS CODE WE ARE GOING TO LEARN ABOUT COMPILE TIME POLYMOORPHISM TOPIC OPERATOR OVERLADING
//IN THESE TYPES OF MEATHOS WE USE OPERATOR TO PERFORM SOME SPECIAL TASK

#include <iostream>
using namespace std;

class B{
	public:
		int a;
		int b;
		
	public:
		int add(){
			return a+b;
		}
	void operator(B&obj){
		
	}
};

int main(){
	
	return 0; 
}
