#include <iostream>
using namespace std;

int main(){
//	int array[100]={1,5,3};
//	int ab=10;
//	int *ptr=&ab;
//	cout<<"The address of arrays first element is "<<array<<endl;
//	cout<<"The address of arrays first element is "<<&array[2]<<endl;
//	cout<<"The value of arrays first element is "<<*array<<endl;
//	cout<<"The value of arrays first element is "<<*array+1<<endl;// THIS WILL GIVE THE VALUE OF ARRAY +1
//	cout<<"The value of arrays first element is "<<*(array+1)<<endl; //IT WILL GIVE THE NEXT INDEX OF ARRAY  
//	cout<<sizeof(array)<<endl;
//	cout<<sizeof(ptr)<<endl;
//	int data[10];
//	int *pointer =&data[10];
//	
//	cout<<sizeof(data)<<endl;
//	cout<<sizeof(pointer)<<endl;
//	cout<<sizeof(*pointer)<<endl;


int arr[10]={1,8,3,4};

cout<<arr<<endl;
cout<<&arr<<endl;
cout<<&arr[0]<<endl;

cout<<endl;

int *p=&arr[0];

cout<<p<<endl;
cout<<*(p+1)<<endl;
cout<<&p<<endl;

	return 0;
}
