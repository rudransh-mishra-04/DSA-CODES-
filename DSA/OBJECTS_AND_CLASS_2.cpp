#include <iostream>
using namespace std;

class player{
	private:
		int age;
		char name;
		int salary;
	public:
		//SALARY
		int getsalary(){
			return salary;
		}
		int setsalary(int sa){
			salary=sa;
		}
		//AGE
		int getage(){
			return age;
		}
		int setage(int a){
			age=a;
		}
		//NAME
		string getname(){
			return name;
		}
		string setname(string ch){
			name=ch;
		}
};

int main (){
	//STATICALLY ALLOCATION
	player p1;
	p1.setage(10);
	p1.setname("rudransh");
	p1.setsalary(1000000);
	cout<<"the age is "<<p1.getage()<<endl;
	cout<<"the salary is "<<p1.getsalary()<<endl;
	cout<<"The name is "<<p1.getname()<<endl;
	
	return 0;
}
