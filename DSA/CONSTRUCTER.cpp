//IN THIS CODE WE WILL THE THE BASIC OF CONSTRUCTOR AND HOW CAN WE INVOKE THEM DYNAMICALLY AND SATATICALLY 

#include <iostream>
using namespace std;

class Hero{
	private:
		int data=11;
	public:
		int getdata(){
			return data;
		}
		int setdata(int a){
			data=a;
		}
		Hero(){
			cout<<"The constructer is invoked"<<endl;
		}
};

int main(){
	//THIS IS THE STATIC ALLOCATION OF THE CONSTRUCTER
	Hero R;
//	cout<<"The vale of data in the private is "<<R.getdata();


	//THIS IS THE DYNAMIC ALLOCATION OF THE CONSTRUCTER
	
	Hero* h=new Hero;
}
