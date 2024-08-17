//IN THIS TOPIC WE WILL LEARN ABOUT THE SCOPES 
 
//HERE YOU CAN SEE THAT WHEN WE ARE UPDATING THE VALUE OF THE ARRAY IN THE FUNCTION ITS GETS UPDATED 
//BECAUSE WE ARE NOT PROVIDING THE DATA WE ARE PROVIDING THE ADDRESS OF THE ARRAY
#include <iostream>
using namespace std;

void update(int array[],int size){
	cout<<"Now the code is in function"<<endl;
	array[0]=100; 
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<"Now leaving the function "<<endl;
}


int main (){
	int arr[3]={1,2,3};
	update(arr,3); //WE HAVE DIRECTLY PROVIDED THE ADDRESS OF THE ARRAY 
	cout<<"This part is of main "<<endl;
	for(int i=0;i<3;i++){
	cout<<arr[i]<<" ";
	}
	return 0;
}
