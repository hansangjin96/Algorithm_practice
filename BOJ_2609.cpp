#include<bits/stdc++.h>
using namespace std;
int main(void){
	int a=0,b=0;
	cin>>a>>b;
	vector<int> arr1(5,0);
	vector<int> arr2(5,0);
	
	while(1){
		if(a==1) break;
		
		if(a%2==0){
			a/=2;
			arr1[0]++;
		}else if(a%3==0){
			a/=3;
			arr1[1]++;
		}else if(a%5==0){
			a/=5;
			arr1[2]++;
		}else if(a%7==0){
			a/=7;
			arr1[3]++;
		}else if(a%11==0){
			a/=11;
			arr1[4]++;
		}
	}
	
	while(1){
		if(b==1) break;
		
		if(b%2==0){
			b/=2;
			arr2[0]++;
		}else if(b%3==0){
			b/=3;
			arr2[1]++;
		}else if(b%5==0){
			b/=5;
			arr2[2]++;
		}else if(b%7==0){
			b/=7;
			arr2[3]++;
		}else if(b%11==0){
			b/=11;
			arr2[4]++;
		}
	}

	int MIN=0, MAX=0;
	
	for(int i=0;i<arr1.size();i++){
		if(arr1[i]!=0&&arr2[i]!=0){
			MAX = min(2^arr[i]*)
		}
	}
	
	return 0;
}
