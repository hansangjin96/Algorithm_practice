#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
	int test_case;
	int T,N;
    vector<int> arr(100,0);
	//cin>>T;
    T=10;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>N;
        for(int i=0;i<arr.size();i++)
        {
            cin>>arr[i];
        }
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<N;i++)
        {
            arr[0]++;
            arr[arr.size()-1]--;
            sort(arr.begin(),arr.end());
        }
        
        cout<<"#"<<test_case<<" "<<arr[arr.size()-1] - arr[0]<<endl;
	}
	return 0;
}
