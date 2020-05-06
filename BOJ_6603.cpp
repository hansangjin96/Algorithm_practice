#include<bits/stdc++.h>

using namespace std;
/*
int main(void){
	int N=0;
	while(1){
		cin>>N;
		
		if(N==0) break;
		
		vector<int> arr(N,0);
		vector<int> d(N,0);
		
		for(int i=0;i<N;i++){
			cin>>arr[i];
		}
		
		for(int i=0;i<N;i++){
			if(i<N-6) d[i]=0;
			else d[i]=1;
		}

		vector<vector<int>>ans;

		do{
			vector<int> current;
			for(int i=0;i<N;i++){
				if(d[i]==1) current.push_back(arr[i]);
			}
			ans.push_back(current);
		}while(next_permutation(d.begin(),d.end()));
		
		sort(ans.begin(),ans.end());
		
		for(int i=0;i<ans.size();i++){
			for(int j=0;j<ans[0].size();j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	
	
	return 0;
}*/

int n;
int tmp[14];
void dfs(int index);
vector<int> lotto;
int main(void)
{
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;
        else
        {
            for (int i = 0; i < n; i++)
                cin >> tmp[i];
 
            dfs(0);
            cout << endl;
        }
    }
}
 
void dfs(int index)
{
    if (lotto.size() == 6)
    {
        for (int i = 0; i < 6; i++)
        {
            cout << lotto[i] << ' ';
        }
        cout << endl;
        return;
    }
    else
    {
        for (int i = index; i < n; i++)
        {
            lotto.push_back(tmp[i]);
            dfs(i + 1);
            lotto.pop_back();
        }
    }
}


