//#include <iostream>
//using namespace std;
//
//class heap{
//	public:
//		int array[100];
//		int size=0;
//		
//		void insert(int val){
//			size=size+1;
//			int index=size;
//			array[index]=val;
//			
//			while(index>1){
//				int parent=index/2;
//				if(array[parent]<array[index]){
//					swap(array[parent],array[index]);
//				}
//				else{
//					return;
//				}
//			}
//		}
//		
//		void print(){
//			for(int i=1;i<=size;i++){
//				cout<<array[i]<<" ";
//			}
//			cout<<endl;
//		}
//		
//		void deleteHeap(){
//			if(size==0){
//				return;
//			}
//			array[1]=array[size];
//			size--;
//			//now with travaering taking the root node to its corrent position 
//			int i=1;
//			int left=2*i;
//			int right=(2*i)+1;
//			
//			if(left<size && array[i]<array[left]){
//				swap(array[left],array[i]);
//				i=left;
//			}
//			if(right<size && array[i]<array[right]){
//				swap(array[right],array[i]);
//				i=right;
//			}
//		}
//};
//
//
//		void heapify(int array[],int n,int i){
//			int largest=i;
//			int left=2*i+1;
//			int right=(2*i)+2;
//			
//			if(left<n && array[left]>array[n]){
//				swap(array[left],array[n]);
//				largest=left;
//			}
//			if(right<n && array[right]>array[n]){
//				swap(array[right],array[n]);
//				largest=right;
//			}
//			if(largest!=i){
//				swap(array[largest],array[i]);
//				heapify(array,n,largest);
//			}
//		}
//		
//		int main(){
//			int array[8]={-1,23,73,88,22,54,82,11};
//			int n=7;
//			for(int i=n/2;i>0;i--){
//				heapify(array,n,i);
//			}
//			
//			for(int i=1;i<=n;i++){
//				cout<<array[i]<<" ";
//			}
//			cout<<endl;
//			return 0;
//		}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main(){
//	int array[5]={1,2,3,4,5};
//	reverse(array,array+5);
//	
//	for(int i=0;i<5;i++){
//		cout<<array[i]<<" ";
//	}
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//void reverse(int array[10],int s,int e){
//	while(s<e){
//		int temp=array[s];
//		array[s]=array[e];
//		array[e]=temp;
//		s++;
//		e--;
//	}
//}
//void print(int array[],int size){
//	for(int i=0;i<size;i++){
//		cout<<array[i]<<" ";
//	}
//	cout<<endl;
//}
//
//int main(){
//	int array[10]={1,2,3,4,5,6,7,8,9,10};
//	int s=0;
//	int size=sizeof(array)/sizeof(array[0]);
//	int e=size-1;
//	cout<<"This is the array before revesring using two pointer approrach "<<endl;
//	print(array,size);
//	cout<<"This is the array after revesring using two pointer approrach "<<endl;
//	reverse(array,s,e);
//	print(array,size);
//	return 0;
//}

#include <iostream>
using namespace std;

int main(){
	
	return 0;
}

















