#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int temp = 0;
    
    
    for(int i=0;i<scoville.size();i++)
    {
        if(scoville[i]<K)
        {
            temp = scoville[i]+(scoville[i+1]*2);
            ++answer;
            scoville[i+1] = temp;
        }else{
        	break;
		}
		
    }
    return answer;
}
int main(void)
{
	vector<int> v ={1, 2, 3, 9, 10, 12};
	int K=7;
	
	int ans = solution(v,K);
	cout<<ans;
}
