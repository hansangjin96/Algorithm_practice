#include<bits/stdc++.h>
 
using namespace std;
int main(int argc, char** argv)
{
    int test_case;
    int T,N,sum=0;
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        cin>>N;
         
        for(int i=1;i<=N;i++)
        {
            if(i%2==1)
            {
                sum+=i;
            }else{
                sum-=i;
            }
        }
         
        cout<<"#"<<test_case<<" "<<sum<<endl;
        sum=0;
    }
    return 0;
}
