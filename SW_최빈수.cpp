#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int test_case;
    int T,temp,max = 0,answer = 0;
    vector<int> arr(1000,0);
    map<int,int> mp;
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        cin>>temp;
        for(int i=0;i<1000;i++)
        {
            cin>>arr[i];
        }
         
        for(int i=0;i<1000;i++)
        {
            mp[arr[i]] ++;
        }
         
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second >= max) 
            {
                max = i->second;
                if(i->first > answer) answer = i->first;
            }
            //cout<<"i->first : "<<i->first << " i->second : "<<i->second<<endl; 
        }
         
        cout<<"#"<<test_case<<" "<<answer<<endl;
        arr.clear();
        mp.clear();
        answer = 0 , max = 0;
    }
    return 0;
}
