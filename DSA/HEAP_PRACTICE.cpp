#include <iostream>
using namespace std;

class heap{
	public:
		int array[100];
		int size=0;
		void insertion(int value){
			size=size+1;
			int index=size;
			array[index]=value;
			
			while(index>1){
				
			int parent=index/2;
			if(array[parent]<array[index]){
				swap(array[parent],array[index]);
				index=parent;
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
};

void heapify(int array[],int n, int i){
	int largest=i;
	int left=2*i;
	int right=2*i+1;
	
	if(left<n && array[largest]<array[left]){
		largest=left;
	}
	if(right<n && array[largest]<array[right]){
		largest=right;
	}
	if(largest!=i){
		swap(array[largest],array[i]);
		heapify(array,n,largest);
	}
}

int main(){
	heap h;
	h.insertion(50);
	h.insertion(44);
	h.insertion(23);
	h.insertion(99);
	h.insertion(56);
	h.print();
	int array[6]={-1,54,53,55,52,50};
	int n=5;
	for(int i=n/2;i>0;i--){
		heapify(array,n,i);
	}
	cout<<"Printing the array "<<endl;
	for(int i=1;i<=n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
}
