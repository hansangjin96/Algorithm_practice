#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	int test_case;
	int T,N,count=0;
    bool can=true;
    vector<vector<char>> arr(8,vector<char>(8) );
    T=10;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>N;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
        }
        cout<<"#"<<test_case<<" ";
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8-N+1;j++)
            {
                for(int k=0;k<(N/2);k++)
                {
                    //cout<<"arr[i][j+k] : "<<arr[i][j+k]<<" arr[i][j+N-k] : "<<arr[i][j+N-k]<<endl;
                    if(arr[i][j+k]==arr[i][j+N-1-k])
                    {
                        can=true;
                    }else{
                        can=false;
                        break;
                    }
                }
                if(can){
                    count++;
                }
            }
        }
        
        for(int i=0;i<8-N+1;i++)
        {
            for(int j=0;j<8;j++)
            {
                
                for(int k=0;k<(N/2);k++)
                {
                    if(arr[i+N-1-k][j]==arr[i+k][j])
                    {
                        can=true;
                    }else{
                        can=false;
                        break;
                    }
                }
                if(can){
                    count++;
                }
            }
        }
        
        cout<<count<<endl;
        count =0;
	}
	return 0;
}
