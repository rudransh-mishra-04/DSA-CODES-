#include <iostream>
using namespace std;

class queue{
	//THIS IS STEP NUMBER 1
		//These are the things taht we need to implement queue
		int *array;
		int size;
		int rear;
		int qfront;
		public:
			//THIS IS THE INITILIZATION OF THE QUEUE USING ARRAYS AND ASSINGNING BASIC VALUES
			queue(int capacity){
				size=capacity;
				array=new int[size];
				qfront=0;
				rear=0;
			}
			//THIS IS FOR INSERTION OF ELEMENT IN THE QUEUE
		void enqueue(int data){
			if(rear==size){
				cout<<"The queue is full and we can not insert";
				return;
			}
			else{
				array[rear]=data;
				rear++;
			}
		}
		//THIS IS TO REMOVE THE ELEMENT FROM THE QUEUE
		int deque(){
			if(qfront==rear){
				return -1;
			}
			else{
				int ans=array[qfront];
				array[qfront]=-1;
				qfront++;
				if(qfront==rear){
					qfront=0;
					rear=0;
				}
				return ans;
			}
		}
		//THIS IS TO CHECK THE FIRST ELEMET IN THE QUEUE
		int front(){
			if(qfront==rear){
				return -1;
			}
			else{
				return array[qfront];
			}
		}
		//THIS IS TO CHECK IF THE QUEUE IS EMPTY OR NOT 
		bool isEmpty(){
			if(qfront==rear){
				return true;
			}
			else{
				return false;
			}
		}
};

int main(){
	int capacity=100;
	queue da(capacity);
	da.enqueue(10);
	da.enqueue(11);
	da.enqueue(12);
	da.enqueue(13);
	while(!da.isEmpty()){
		cout<<da.front()<<" ";
		da.deque();
	}
	return 0;
}
