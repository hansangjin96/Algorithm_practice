#include<bits/stdc++.h>

using namespace std;

int main(void){
	int place=0;
	long long ans=0;
	
	cin>>place;
	
	vector<int> stu(place,0);
	vector<int> sup(2,0);
	
	for(int i=0;i<place;i++){
		cin>>stu[i];
	}
	
	for(int i=0;i<2;i++){
		cin>>sup[i];
	}
	
	for(int i=0;i<place;i++){
		stu[i]-=sup[0];
		ans++;
	}
	
	for(int i=0;i<place;i++){
		if(stu[i]>0){
			ans+=stu[i]/sup[1];
			if(stu[i]%sup[1]!=0){
				ans++;
			}
		}
	}
	
	cout<<ans;
	
	return 0;
}
