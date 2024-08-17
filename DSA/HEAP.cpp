#include <iostream>
using namespace std;

class heap{
	public:
		int array[100];
			int size=0;

		
		//THIS IS THE FUNCTION OF INSERTION 
		void insert(int val){
			size=size+1;
			int index=size;
			array[index]=val;
			
			while(index>1){
				int parent=index/2;
				
				if(array[parent]<array[index]){
					swap(array[parent],array[index]);
				}
				else{
					return;
				}
			}
		}
		//THIS IS THE FUNCTION OF PRINTING 
		void print(){
			for(int i=1;i<=size;i++){
				cout<<array[i]<<" ";
			}
			cout<<endl;
		}
		//THIS IS THE FUNCTION OF DELETION IN HEAP 
		 void deleteheap(){
		 	if(size==0){
		 		cout<<"Nothing to delete"<<endl;
		 		return;
			 }
			 array[1]=array[size];
			 size--;
			 //now take root node to its correct position 
			 int i=1;
			 while(i<size){
			 	int leftIndex=2*i;
			 	int rightIndex=(2*i)+1;
			 	
			 	if(leftIndex< size && array[i]< array[leftIndex]){
			 		swap(array[leftIndex],array[i]);
			 		i=leftIndex;
				 }
				else if(rightIndex< size && array[i]< array[rightIndex]){
			 		swap(array[rightIndex],array[i]);
			 		i=rightIndex;
				 }
				 else{
				 	return;
				 }
			 }
		 }
		
};

int main(){
	heap h;
	h.insert(50);
	h.insert(55);
	h.insert(53);
	h.insert(52);
	h.insert(54);
	h.print();
	h.deleteheap();
		h.print();
	return 0;
}
