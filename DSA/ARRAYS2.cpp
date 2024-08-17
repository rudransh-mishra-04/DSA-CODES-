//THIS IS THE CONTINUATION PART OF THE ARRAYS 
#include <iostream>
using namespace std;

void array(int arr[],int size){
	cout<<"This program is about the array"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";   
	}
	cout<<"The printing is done "<<endl;
}

int main(){
	int arr[10]={1,2,3,4,5};
	int n=10;
	array(arr,10);// CALLLING THE ARRAYS WITH THE HELP OF A FUNCTION
	int data= sizeof(arr)/sizeof (int); //TO DETERMIN THE SIZE OF THE ARRAY WE USE THE SIZEOF OPERATOR 
	//NOTICE WHILE WE ARE FINDING THE SIZE OF THE ARRAY EVEN IF WE FILL TWO PARTS OF ARRAYS SILL WE GET 
	//THE TOTAL SIZE OF IT SO THAT IS TECHNICALLY WRONG AND WE CAN NEVER FIND THE ARRAYS WHICH WE HAVE 
	//FILLED ANYHOW SO THATS WHY WE GIVE THE SIZE OR PROVIDE SIZE AS A COMPULSARY INFORMATION IN THE 
	//ARRAY
	cout<<"The size of the array is "<<data<<endl;
	
	// ARRAY USING DIFFERENT DATA TYPES 
	
	char ch[4]={'a','b','c','d'};
		for(int i=0;i<4;i++){
		cout<<ch[i]<<" ";   
	}
	
	
}
