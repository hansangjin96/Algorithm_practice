#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> gems) {
    vector<int> answer(2,0);
    map<string,int> visited; 
    map<string,int> mp;
    map<string,int>::iterator it;
    set<string> st;
    set<string>::iterator its;
    vector<int> ans;
    int check =0;
    int length=0;
    int tmp =100000;
    
    for(int i=0;i<gems.size();i++){
        st.insert(gems[i]);
    }
    
    for(its = st.begin();its != st.end();its ++){
        visited[*its] = 0;
    }
    
    for(int i=0;i<gems.size();i++){
        if(visited[gems[i]]==0){
            
            mp[gems[i]]=i+1;
            
            visited[gems[i]]=1;
            check++;
            if(check==st.size()){
                
                for(it=mp.begin();it!=mp.end();it++){
                    ans.push_back(it->second);
                }
                
                sort(ans.begin(),ans.end());
                
                length=ans.back()-ans.front();
                cout<<ans.front()<<" "<<ans.back()<<endl;
                if(length<tmp){
                    answer[0]=ans.front();
                    answer[1]=ans.back();
                    tmp=length;
                }
                
                for(it=mp.begin();it!=mp.end();it++){
                    if(it->second==ans.front()){
                        visited[it->first]=0;
                    }
                }
                
                check--;
                
                ans.clear();
            }
        }else{
            mp[gems[i]]=i+1;
        }
    }
    
    return answer;
}
