#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer =1;
    map<string,int> mp;
    
    
    for(int i=0;i<clothes.size();i++)
    {
        mp[clothes[i][1]] +=1;
    }
	
	for(auto i = mp.begin();i!=mp.end();i++)
	{
		answer*=(i->second)+1;
	}
    
    answer--;
       
    return answer;
}

int main(void){
	vector<vector<string>> clothes;
	vector<string> v1={"yellow","head"};
	vector<string> v2={"fuck","head"};
	vector<string> v3={"hi","head"};
	vector<string> v4={"hi","foot"};
	vector<string> v5={"hi","foot"};
	vector<string> v6={"hi","eye"};
	vector<string> v7={"hi","eye"};
	
	clothes.push_back(v1);
	clothes.push_back(v2);
	clothes.push_back(v3);
	clothes.push_back(v4);
	clothes.push_back(v5);
	clothes.push_back(v6);
	clothes.push_back(v7);
	solution(clothes);
	return 0;
}
