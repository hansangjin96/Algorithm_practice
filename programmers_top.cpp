#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    stack<int> st;
    
    for(int i=0;i<heights.size();i++)
    {
        st.push(heights[i]);
    }
    for(int i=heights.size()-1;i>=0;i--)
    {
        int temp = st.top();//temp = 4;
        for(int j=i-1;j>=0;j--)
        {
            if(temp<heights[j])
            {
                answer.push_back(j+1);
                break;
            }
            if(j==0)
            {
                answer.push_back(0);
            }
            
        }
        st.pop();
    }
    answer.push_back(0);
    reverse(answer.begin(),answer.end());
    /*
    for(int i=0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }*/
    return answer;
}
