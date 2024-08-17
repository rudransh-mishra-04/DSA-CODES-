#include <iostream>
using namespace std;

//THIS FUNCTION HELP TO DETERMINE FOR EVEN NUMBERS
//IT WILL RETURN 1 FOR EVEN
bool IsEven(int a){                // BOOL IS USED FOR TRUE AND FALSE OPERATIONS 
	if(a&1){                      // CHECKLING FOR ODD NUMBERS
		return 0;
	}
	else{
		return 1;
	}
}

int main (){
	int a;
	cout<<"If the number is even it will give 1 else 0 "<<endl;
	cout<<"Enter the number "<<endl;
	cin>>a;
	bool data =IsEven(a);       //CALLING THE FUNCTION FOR CHECKING OF THE EVEN AND ODD
	cout<<data;
}
