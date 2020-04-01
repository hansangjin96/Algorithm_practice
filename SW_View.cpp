#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int test_case;
    int T=10;
    int N,temp=0,max=100000000,answer=0;
    bool can=true;
    vector<int> arr(1000,0);
    //cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        cout<<"#"<<test_case<<" ";
        cin>>N;//100
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
         
        for(int i=2;i<N-2;i++)
        {
            for(int j=i-2;j<i+3;j++)
            {
                if(i==j) continue;//자기 자신 제외
                 
                temp = arr[i]-arr[j];
                 
                if(temp<=0){
                    can = false;
                    break; // 조망권 x
                }
                 
                if(temp<max){ // 조망권중 가장 작은 값
                    max = temp;
                }
            }
            if(can)
            {
                answer+=max;
            }
            can = true;
            max = 100000000;
        }
        cout<<answer<<endl;
        answer=0;
    }
    return 0;
}
