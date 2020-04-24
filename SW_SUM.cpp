#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	int test_case;
	int T,N;
    N=100;
    
    vector<vector<int> > arr(100,vector<int>(100,0));
    vector<int> row(N,0);
    vector<int> col(N,0);
    vector<int> cross(2,0);
    int answer=0;
    
	for(test_case = 1; test_case <= 10; ++test_case)
	{
        cin>>T;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                arr[i][j]=0;
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                row[i]+=arr[i][j];
                if(i==j) cross[0]+= arr[i][j];
                if((i+j)==N-1) cross[1]+=arr[i][j];
                col[j]+=arr[i][j];
            }
        }
        
        sort(row.begin(),row.end(),greater<int>());
        sort(col.begin(),col.end(),greater<int>());
        sort(cross.begin(),cross.end(),greater<int>());
        
        answer= max(max(col[0],row[0]),cross[0]);
        
        cout<<"#"<<T<<" "<<answer<<endl;
        
        row.clear();
        col.clear();
        cross.clear();

        answer=0;
    }
	return 0;
}
