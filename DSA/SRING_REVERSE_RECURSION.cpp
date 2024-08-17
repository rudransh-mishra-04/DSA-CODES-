//	WE HAVE TO REVERSE THE STRING WITH THE HELP OF RECURSION 

#include <iostream>
using namespace std;
//WE HAVE TO PASS THE ADDRESS OF THE STRING BECAUSE THE CHANGES WIL BE DONE IN THE COPY AND NOT IN THE REAL
//STRING 
void revrse(string &str, int i ,int j){
	if(i>j){
		return;
	}
	swap(str[i],str[j]);
	i++;
	j--;
	revrse(str,i,j);
}
void print(string str){
	cout<<str<<endl;
}

int main(){
	cout<<"Before reversing "<<endl;
	string str="rudransh";
	print(str);
	cout<<"After reversing "<<endl;
	revrse(str,0,str.length()-1);
	print(str);
	return 0;
}
