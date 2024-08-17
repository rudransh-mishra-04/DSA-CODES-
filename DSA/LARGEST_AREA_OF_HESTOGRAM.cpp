#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int getMaxArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> s;
    int maxArea = 0;
    int tp; // To store top of the stack
    int areaWithTop; // To store area with top bar as the smallest (or minimum height) bar

    int i = 0;
    while (i < n) {
        if (s.empty() || heights[s.top()] <= heights[i]) {
            s.push(i++);
        } else {
            tp = s.top();
            s.pop();
            areaWithTop = heights[tp] * (s.empty() ? i : i - s.top() - 1);
            if (maxArea < areaWithTop) {
                maxArea = areaWithTop;
            }
        }
    }

    while (!s.empty()) {
        tp = s.top();
        s.pop();
        areaWithTop = heights[tp] * (s.empty() ? i : i - s.top() - 1);
        if (maxArea < areaWithTop) {
            maxArea = areaWithTop;
        }
    }

    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Maximum area is " << getMaxArea(heights) << endl;
    return 0;
}

