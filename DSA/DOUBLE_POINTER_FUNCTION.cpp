#include <iostream>
using namespace std;

void update(int **ptr){
	//ptr=ptr+1;
	//THERE IS NO CHANGE 
	
//	*ptr=*ptr+1;
	//THERE IS A CHANGE 
	
//	**ptr=**ptr+1;
	//THERE IS A CHANGE 
	
}

int main(){
	int i=100;
	int *p=&i;
	int **p2=&p;
	
	cout<<endl<<endl;
	
	cout<<"before "<<i<<endl;
	cout<<"before "<<p<<endl;
	cout<<"before "<<p2<<endl;
	cout<<endl<<endl;
	update(p2);
	cout<<"before "<<i<<endl;
	cout<<"before "<<p<<endl;
	cout<<"before "<<p2<<endl;
	return 0;
}
