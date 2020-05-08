#include<bits/stdc++.h>

using namespace std;

int main(void){
	int N=0,M=0;
	cin>>N>>M;
	vector<string> arr(N,"");
	vector<string> arr2(N,"");
	set<char> st;
	vector<int> arr3(N,0);
	
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	
	if(M<5){
		cout<<0;
		return 0;
	}
	
	for(int i=0;i<arr.size();i++){
		string temp;
		temp = arr[i].erase(0,4);
		temp = temp.erase(temp.size()-4,4);
		arr2[i]=temp;
	}
	
	for(int i=0;i<arr2.size();i++){
		for(int j=0;j<arr2[i].size();j++){
			if(arr2[i][j]=='a'||arr2[i][j]=='n'||arr2[i][j]=='t'||arr2[i][j]=='i'||arr2[i][j]=='c'){
				continue;
			}else{
				st.insert(arr2[i][j]);
			}
		}
		arr3[i] = st.size();
		st.clear();

	}
	for(int i=0;i<arr3.size();i++){
		cout<<arr3[i]<<" ";
	}
	return 0;
}
