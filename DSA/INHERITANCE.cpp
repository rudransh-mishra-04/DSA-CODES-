#include <iostream>
using namespace std;
//FIRSTLY WE HAVE CREATED A PRAENT CLASS 
class human{
	private:
		int age;
		int height;
		int weight;
	public:
		int getage(){
			return age;
		}
		int setheight(int a){
			this->height=a;
		}
		int getheight(){
			return height;
		}
		void awake(){
			cout<<"The human is now awake"<<endl;
		}
};
// NOW WE HAVE CREATED THE CHID CLASS AND INHERITED THE PARENT CLASS 

//THIS IS GETTING ACCESSED BY THE PUBLIC 
class male :public human{
	public:
		int salary;
		string name;
		void sleep(){
			cout<<"The male is now sleeping"<<endl;
		}
};

//NOW WE WILL ACCESS BY PROTRCTED
class female:protected human{
	int time;
	int gettime(){
		return time;
	}
	int settime(int t){
		this->time=t;
	}
};

int main(){
	male m;
	//THIS IS GETTING ACCESED BY PUBLIC
	m.setheight(100);
	cout<<"The height is "<<m.getheight()<<" cm"<<endl;
	m.sleep();
	
	//NOW WE WILL ACCSSS BY PROTECTED
	female f;
	return 0;
}
