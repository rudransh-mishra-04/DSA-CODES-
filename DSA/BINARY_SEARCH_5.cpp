#include <iostream>
using namespace std;

int sq_root(int number){
	
	int start=0;
	int end=number;
	int mid=start+(end-start)/2;
	
	int data=-1;
	while(start<=end){
			int sq=mid*mid;
		if(sq==number){
			return mid;
		}
		if(sq<number){
			data=mid;
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	 mid=start+(end-start)/2;
	}
	return data;
}

int main(){
	int dd=sq_root(36);
	cout<<dd<<endl;
	return 0;
}
