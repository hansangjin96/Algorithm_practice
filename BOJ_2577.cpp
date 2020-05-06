#include<bits/stdc++.h>

using namespace std;

int main(void){
	int A=0,B=0,C=0;
	
	cin>>A>>B>>C;
	
	int mul = A*B*C;
	
	string smul = to_string(mul);
	
	vector<int> ans(10,0);
	
	sort(smul.begin(),smul.end());
	
	for(int i=0;i<smul.size();i++){
		ans[smul[i]-'0']++;
	}
	
	for(int i=0;i<10;i++){
		cout<<ans[i]<<"\n";
	}
	
	return 0;
}
