//MY ATTEMPT TO THIS QUESTION OF BINARY SEARCH

//QUESTION THERE ARE MULTIPLE NUMBERS IN THE ARRAY AND YOU HAVE TO FIND THE FIRST AND THE LAST NUMBER INDEX

//#include <iostream>
//using namespace std;
//
//int binary_search(int arr[],int size,int key){
//	
//	int start=0;
//	int end=size-1;
//	int first_index;
//	int last_index;
//	int mid=(start+end)/2;
//	int i=1;
//	while(start<=end){
//		
//		if(arr[mid]==key){
//			while(arr[mid-i]==key){
//				first_index=mid-i;
//				i++;
//			}
//			while(arr[mid+i]==key){
//				last_index=mid+i;
//				i++;
//			}
//		}
//		if(key>arr[mid]){
//			start=mid+1;	
//		}
//		else{
//			end=mid-1;
//		}
//		mid=(start+end)/2;
//		
//}
//return (first_index,last_index);
//}
//
//int main(){
//	
//	int array[6]={1,2,3,3,3,4};
//	int data=binary_search(array,6,3);
//	cout<<"The index are "<<data<<endl;
//}

#include <iostream>
using namespace std;

int first_occurance(int arr[],int n, int key){
	
	int start=0;
	int end=n-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			ans=mid;
			end=mid-1;
		}
		else if(key>arr[mid]){// GO TO THE RIGHT PART
			start=mid+1;
		}
		else if(key<arr[mid]){// GO TO THE LEFT PART
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int second_occurance(int arr[],int n, int key){
	
	int start=0;
	int end=n-1;
	int ans=-1;
	int mid=start+(end-start)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			ans=mid;
			start=mid+1;
		}
		else if(key>arr[mid]){// GO TO THE RIGHT PART
			start=mid+1;
		}
		else if(key<arr[mid]){// GO TO THE LEFT PART
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main(){
	
	int arr[10]={1,2,2,2,3,3,3,3,3,5};
	int first=first_occurance(arr,10,3);
	int second=second_occurance(arr,10,3);
	cout<<"The first index of the repeating elemet is "<<first<<endl;
	cout<<"The last index of the repeating elemet is "<<second<<endl;
	return 0;
}















