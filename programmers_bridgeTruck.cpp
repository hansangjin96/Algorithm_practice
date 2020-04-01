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
            ing.push(truck_weights[i]);//�ٸ��� ���� 7
            temp+=ing.back();//���� �ٸ��� �ǳʴ� Ʈ���� ����
            i++;//0��° Ʈ�� ������ ������ 1��°
        }
        
        for(int j=t;j<t+ing.size();j++)
        {
            timer[j]++;
        }
        
        if(timer[t]==bridge_length)
        {
            temp-=ing.front();//���� �ٸ� ���� ��
            ing.pop();
            t++;
        }
        
        answer++; //1�ʾ� ��ga
    }
    
    return answer;
}
