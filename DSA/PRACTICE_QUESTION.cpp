#include <iostream>
using namespace std;

inline int print_sum(int a,int b){
	int data = a+b;
	return data;
}

int main(){
	int a=100,b=100;
	int result=print_sum(a,b);
	cout<<"The sum is "<<result<<endl;
	return 0;
}
