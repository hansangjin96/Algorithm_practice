#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 1,temp=0,i=0,t=0;
    int timer[10000] = {0,};
    queue<int> ing;
    while(1)
    {
        if(i==truck_weights.size()&&ing.empty())
        {
            break;
        }
        
        if(temp+truck_weights[i]<=weight&&i!=truck_weights.size())
        {
            ing.push(truck_weights[i]);//다리에 진입 7
            temp+=ing.back();//현재 다리를 건너는 트럭의 무게
            i++;//0번째 트럭 넣으면 다음은 1번째
        }
        
        for(int j=t;j<t+ing.size();j++)
        {
            timer[j]++;
        }
        
        if(timer[t]==bridge_length)
        {
            temp-=ing.front();//현재 다리 무게 빼
            ing.pop();
            t++;
        }
        
        answer++; //1초씩 증ga
    }
    
    return answer;
}
