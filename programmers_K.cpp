#include <string>
#include <vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v;
        
    for(int k=0;k<commands.size();k++)//몇개의 커멘드가 있는지
    {
        for(int i=commands[k][0]-1;i<commands[k][1];i++)
        {
            v.push_back(array[i]);
        }

        sort(v.begin(),v.end());
        
        answer.push_back(v[commands[k][2]-1]);
        v.clear();
    }
    
    return answer;
}
