//#include <iostream>
//using namespace std;
//
//int main(){
//	int array[10]={1,2,3,4,5,6,7,8,9,10};
//	for(int var : array){
//		cout<< var <<endl;
//	}
//	return 0;
//}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int binary_search(int array[],int n,int a){
    int start=0;
    int end=n-1;
    int mid=start+(start-end)/2;
    while(start<end){
        if(array[mid]==a){
            return mid;
        }
        if(array[mid]>a){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(start-end)/2;
    }
    return -1;
}

int main() {
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int a;
    cout<<"enter the number you what to search for "<<endl;
    cin>>a;
    int data=binary_search(array,10,a);
    if(data==-1){
        cout<<"The number is not in the array"<<endl;
    }
    else{
        cout<<"The number is in the array"<<endl;
    }
    return 0;
}
