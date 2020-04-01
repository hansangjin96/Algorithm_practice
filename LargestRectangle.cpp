#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int max_rectangle(vector<int> &nums) {
    stack<int> s;
    nums.push_back(0);
    int i = 0;
    int maxArea = 0;
    while(i < nums.size()) {
        if(s.empty() || nums[s.top()] <= nums[i] ){
            s.push(i++);
        }
        else {
            int t = s.top();
            s.pop();
            maxArea = max(maxArea, nums[t] * (s.empty() ? i : i - s.top() - 1));
        }
    }
    
    return maxArea;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    while(n != 0) {
        int x;
        cin >> x;
        nums.push_back(x);
        n--;
    }
    cout << max_rectangle(nums);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
