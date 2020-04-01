#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    vector<int> can(30,1) ;
    
    for(int i=0;i<lost.size();i++)
    {
        can[lost[i]-1] = 0;
    }
    
    for(int i=0;i<reserve.size();i++)
    {
        ++can[reserve[i]-1];
    }
    
    for(int i=0;i<can.size();i++)
    {
        if(can[i]==0)
        {
            if(can[i-1]==2)
            {
                --can[i-1];
                ++can[i];
            }else if(can[i+1]==2)
            {
                 --can[i+1];
                ++can[i];
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(can[i]!=0)
        {
            answer++;
        }
    }
    
    return answer;
}
