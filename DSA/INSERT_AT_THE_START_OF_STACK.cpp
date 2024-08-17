#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st,int element){
	//base case
	if(st.empty()){
		st.push(element);
		return;
	}
	int num=st.top();
	st.pop();
	solve(st,element);
		st.push(num);
}

stack<int>insert(stack<int>&st,int element){
	solve(st,element);
	return st;
}
void print(stack<int> &st) {
    stack<int> temp; // Temporary stack to hold elements for printing in correct order
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    while (!temp.empty()) {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}

int main(){
	stack <int> st;
	st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    print(st);
    st=insert(st,0);
    print(st);
	return 0;
}
