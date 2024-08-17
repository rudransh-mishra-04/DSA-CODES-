#include <iostream>
using namespace std;

class Hero{
	private:
		int data;
		int size;
		int level;
	public:
		int getdata(){
			return data;
		}
		int getlevel(){
		return level;
		}
		int setlevel(int lv){
			level=lv;
		}
		int setdata(int da){
			data=da;
		}
		int setsize(int sz){
			size=sz;
		}
		int getsize(){
			return size;
		}
};

int main(){
	//NOW CREATING STATICALLY 
	
	Hero h1;
	h1.setlevel(10);
	cout<<"the level is "<<h1.getlevel<<endl;
	
	//NOW TO CREATE IT DYNAMICALLY 
	Hero *b=new Hero;
	
	return 0;
}
