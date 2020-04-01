#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int test_case;
    int T,cnt = 0;
    string temp;
    cin>>T;
    for(int i = 1; i <= T; ++i)
    {
        temp = to_string(i);
        for(int j=0;j<temp.size();j++)
        {
            //cout<<"temp[j] : "<<temp[j]<<typeid(temp[j]).name()<<endl;
             
            if(temp[j]=='3'||temp[j]=='6'||temp[j]=='9')
            {
                cnt++;
            }
        }
         
        if(cnt!=0)
        {
            for(int j=0;j<cnt;j++)
            {
                cout<<"-";
            }
        }else{
            cout<<temp;
        }
        cout<<" ";
        cnt=0;
    }
    return 0;
}
