#include <iostream>
using namespace std;

class heap{
	public:
		int array[100];
		int size=0;
		
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
		
		void print(){
			for(int i=1;i<=size;i++){
				cout<<array[i]<<" ";
			}
			cout<<endl;
		}
		
		void deleteHeap(){
			if(size==0){
				return;
			}
			array[1]=array[size];
			size--;
			//now with travaering taking the root node to its corrent position 
			int i=1;
			int left=2*i;
			int right=(2*i)+1;
			
			if(left<size && array[i]<array[left]){
				swap(array[left],array[i]);
				i=left;
			}
			if(right<size && array[i]<array[right]){
				swap(array[right],array[i]);
				i=right;
			}
		}
};

		void heapify(int array[],int n,int i){
			int largest=i;
			int left=2*i;
			int right=(2*i)+1;
			
			if(left<n && array[left]<array[n]){
				swap(array[left],array[n]);
				largest=left;
			}
			if(right<n && array[right]<array[n]){
				swap(array[right],array[n]);
				largest=right;
			}
			if(largest!=i){
				swap(array[largest],array[i]);
				heapify(array,n,largest);
			}
		}

int main(){
	heap h;
	h.insert(19);
	h.insert(12);
	h.insert(15);
	h.insert(72);
	h.insert(22);
	h.insert(87);
	h.insert(98);
	h.insert(56);
	h.insert(34);
	h.insert(16);
	h.insert(7);
	h.insert(2);
	cout<<"This is the heap before deleting the heap node "<<endl;
	h.print();
	cout<<"This is the heap after deleting the heap node "<<endl;
	h.deleteHeap();
	h.print();
	int n=
	return 0;
}
