#include<bits/stdc++.h>

using namespace std;

int main(void){
	int N=0,ans=0,temp=0,temp2=0;
	cin>>N;
	
	temp = N/5;
	
	while(1){
		if((N-5*temp)%3!=0){
			temp--;
		}else{
			temp2=(N-5*temp)/3;
			break;
		}
	}

	
	if((temp*5+temp2*3)!=N||temp<0||temp2<0){
		ans=-1;
	}else{
		ans = temp+(N-5*temp)/3;
	}
	
	
	cout<<ans;
	
	return 0;
}
