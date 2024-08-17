// WITHOUT THE HELP OF FUNCTIONS IF WE HAVE TO REPEAT THE TASK FOR LIKE 20 TIME'S THE CODE
//BECOME BULKY AND BECOME ALMOST NON REDABLE 


/*
#include <iostream>
using namespace std;
int main(){
	int n,m,prod=1;
	cout<<"Enter the number then power "<<endl;
	cin>>n>>m;
	
	for(int i=1;i<=m;i++){
		prod=prod*n;
	}
	cout<<"The solution is "<<prod<<endl;
}
*/




// WHEN WE INITIALLY DECLARE THE INTEGER A AND B BEFORE WE CAN WORK THIS WAY



/*
#include <iostream>
using namespace std;

int power(int a,int b){  // THESE ARE THE LOCAL VARIABLE FOR POWER 
	int ans=1;
	for(int i=1;i<=b;i++){
	ans=ans*a;
	}
	return ans;
}
int main(){
	int a,b;           //a AND b ARE THE LOCAL VARIABLE FOR MAIN FUNCTION
	cin>>a>>b;
	int answer =power(a,b);
	cout<<"The asnwer is "<<answer<<endl;	
}
*/



//  BY THIS MEATHOD WE CAN USE IT AS MANY TIME AND THE CODE WILL STILL BE EASY TO READ

#include <iostream>
using namespace std;
int power(){
	int a,b;
	cout<<"Enter the number then power "<<endl;
	cin>> a>>b;
	int ans=1;
	for(int i=1;i<=b;i++){
	ans=ans*a;
	}
	return ans;	
}
int main(){
	int ans =power();
	cout<<"The answer is "<<ans<<endl;
	ans =power();
	cout<<"The answer is "<<ans<<endl;
	ans =power();
	cout<<"The answer is "<<ans<<endl;
	ans =power();
	cout<<"The answer is "<<ans<<endl;
	ans =power();
	cout<<"The answer is "<<ans<<endl;
	ans =power();
	cout<<"The answer is "<<ans<<endl;
	ans =power();
	cout<<"The answer is "<<ans<<endl;
}


