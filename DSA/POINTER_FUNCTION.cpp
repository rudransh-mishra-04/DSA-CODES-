#include <iostream>
using namespace std;

void print(int *ptr){
	cout<<"The address of the variable is "<<ptr<<endl;
	cout<<"The value of the variable is "<<*ptr <<endl;
}

void update(int *ptr){
	ptr=ptr+1;
	cout<<"The address of updated pointer is "<<ptr<<endl;
	// THE UPDATE WILL ONLY BE VALID WHEN WE PRINT THE VALUE OF POINTER IN THE FUNCTION
	cout<<"The value of updated pointer is "<<*ptr<<endl;
}
void update_two(int *ptr){
	*ptr=*ptr+1;
}

int main(){
	
	int a=100;
	
	int *ptr =&a;
	print(ptr);
	cout<<endl;
	update(ptr);
	cout<<endl;
	print(ptr);//WHEN WE PRINT THAT WE WILL NOTICE THAT THE VALUE HAS NOT BEEN UPDATED IN THE MAIN FUNTION 
	cout<<endl;
	update_two(ptr);
	print(ptr);
	
	return 0;
}
