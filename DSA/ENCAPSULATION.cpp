//IN THIS CODE WE ARE GOING TO LEARN ABOUT THE CONSCEPTS OF ENCAPSULATION 

#include <iostream>
using namespace std;

class student{
	private:
		//MAKING ALL THE MEMBER PRIVATE 
		string name;
		int age;
		int height;
	public:
		int getage(){
			return this->age;
		}
		int getheight(){
			return this->height;
		}
		
};

int main(){
	
	return 0;
}
