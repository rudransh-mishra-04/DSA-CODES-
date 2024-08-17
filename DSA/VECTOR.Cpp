#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &v){
	cout<<"The elements stored in the vector are :- ";
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	vector<int> vec;// NO NEED TO MANAGE THE MEMORY
	int element;
	
	for(int i=0;i<5;i++){
		cout<<"Enter the element number "<<i+1<<" ";
		cin>>element;  //FIRSTLY WE ARE TAKING THE INPUT FIR THE NUMBER 
		vec.push_back(element);  //AFTER TAKING THE NUMBER WE THEN DIRECTLY PUT THME INTO THE VECTOR 
	}
	cout<<endl;
	display(vec);
	
	cout<<"The capacity of the vector is "<<vec.capacity();
	return 0;
}
