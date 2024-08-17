//In this code we will convet a number to binary 

/*
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number n "<<endl;
	cin>>n;
	int i=0;
	int ans=0;
	while(n!=0){ // 
		int bit =n&1;  //BIT WILL ONLY BE IN THE FORM OF 0 AND 1 
		ans=(bit *pow(10,i))+ans;
		n=n>>1;
		i++;
	}
	cout<<"The answer in bits is "<<ans<<endl;
}
*/

#include <iostream>
#include <math.h>
int main(){
	int n;
	cin>>n;
	int i=0,ans=0;
	while(n!=0){
		int bit = n&1;
		if(bit==1){
			ans=ans+pow(2,i);
		}
		n=n>>1;
		i++;
	}
	cout<<ans<<endl;
	
}
