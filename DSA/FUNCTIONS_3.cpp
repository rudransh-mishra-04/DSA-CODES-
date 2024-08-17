//WAP ON THE TOPIC OF PERMUATION AND COMBINATION 

#include <iostream>
using namespace std;
int permu(){
	int n,r;  // INITIALIZING THE VALUE OF N AND R 
	cout<<"Enter the value for n and the the value for r "<<endl;
	cin>>n>>r;
	int data=1,dataa=1,dat=1;  //INITIALIZING THE VALUE OF ALL N AND R FACTORIAL AS 1 BEFORE
	
	for(int i=1;i<=n;i++){     // PRINTING THE VALUE OF N FACTORIAL
	data = data*i;
	}
	for(int j=1;j<=r;j++){
	dataa = dataa*j;            // PRINTING THE VALUE OF R FACTORIAL
	}
	for(int k=1;k<=(n-r);k++){  // PRINTING THE VALUE OF N-R FACTORIAL
		dat=dat*k;
	}
	int dd=(data)/(dat*dataa);
	return dd;                   
}
int main(){
	int a,b;
	int solution =permu();
	cout<<"The solution for permutation is "<<solution<<endl;
}
