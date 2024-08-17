#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> NextSmall(vector<int>& data, int n) {
    stack<int> st;
    st.push(-1);
    vector<int> ans(n);  // Initialize ans with the same size as data
    for(int i = n - 1; i >= 0; i--) {  // Iterate from n-1 to 0
        int current = data[i];
        while(st.top() != -1 && st.top() >= current) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(current);
    }
    return ans;
}

int main() {
    vector<int> data = {8, 2, 3, 5, 7, 1, 5, 9};
    for(int i : data) {
        cout << i << " ";
    }
    cout << endl;
    int n = data.size();
    vector<int> ans = NextSmall(data, n);
    for(int i : ans) {
        cout << i << " ";
    }
    return 0;
}

