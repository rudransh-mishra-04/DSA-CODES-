#include <iostream>
using namespace std;

bool isSorted(int array[],int size){
	// FIRSTLY WE ARE CHECKING THAT IF THE ARRAY HAS ZERO OR ONLY ONE ENTRY THAT MEANS IT IS ALREADY SORTED.
	if(size==0 || size==1){  
		return true;
	}
	//IF THE THE ARRAY IS NOT SORTED FOR THE FIRST ELEMENT THEN IT WILL RETURN FALSE 
	if(array[0]>array[1]){
		return false;
	}
	//AFTER CGHECKING FOR FIRST ELEMENT THEN IT WILL GO TO CHECK FOR FURTHER ELEMENT IN THE ARRAY 
	else{
		bool remain=isSorted(array+1,size-1);
	}
	
}

int main(){
	int array[9]={1,2,3,4,5,6,7,8,9};
	int size =sizeof(array)/sizeof(array[0]);
	bool data = isSorted(array,size);
	cout<<data<<endl;
	return 0;
}
