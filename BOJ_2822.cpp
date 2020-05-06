#include<bits/stdc++.h>

using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

int main(void){
	int N=8,sum=0;
	//cin>>N;
	vector<int> arr(N,0);
	vector<pair<int,int>> ans(5,pair<int,int>(0,0));
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	for(int i=0;i<N;i++){
		if(arr[i]>ans.front().first){
			ans.erase(ans.begin());
			ans.push_back(pair<int,int>(arr[i],i));
		}
		
		sort(ans.begin(),ans.end());
	}
	
	for(int i=0;i<5;i++){
		sum+=ans[i].first;
	}
	
	cout<<sum<<endl;
	
	sort(ans.begin(),ans.end(),compare);
	
	for(int i=0;i<5;i++){
		cout<<ans[i].second+1<<" ";
	}
	
	return 0;
}
