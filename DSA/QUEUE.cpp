//THIS IS THE FIRST PROGRAM OF USING OF QUEUE AND IT USES OF FIFO(FIRST IN AND FIRST OUT)

#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> data;
	data.push(10);
	data.push(11);
	data.push(12);
	data.pop();
	data.pop();
	data.pop();
	if(data.empty()){
		cout<<"The queue is empty"<<endl;
	}
	else{
		cout<<"The queue is not empty"<<endl;
	}
	return 0;
}

