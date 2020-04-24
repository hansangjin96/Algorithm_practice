#include<bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> input(9,0);
	vector<int> answer;
	int sum=0;
	int temp=0;
	int first=0,second=0;
	
	for(int i=0;i<input.size();i++){
		cin>>input[i];
	}
	
	for(int i=0;i<input.size();i++){
		sum+=input[i];
	}
	
	//cout<<sum;
	
	
	for(int i=0;i<input.size();i++){
		temp = sum;
		temp-=input[i];
		
		for(int j=0;j<input.size();j++){
			if(i==j) continue;
			if(temp-input[j]==100){
				first=i;
				second=j;
				//cout<<input[first]<<"&"<<input[second]<<" temp "<<temp<<" temp-j: "<<temp-input[j]<<endl;
				break;
			}
		}
		if(first!=0) break;
	}
	//input.erase(first);
	//input.erase(second);
	for(int i=0;i<input.size();i++){
		if(i!=first&&i!=second){
			answer.push_back(input[i]);
		}
	}
	
	//cout<<endl<<input[first]<<endl<<input[second];
	
	/*
	for(int i=0;i<input.size();i++){
		cout<<input[i]<<" ";
	}*/
	/*
	do{
		for(int i=0;i<answer.size();i++){
			temp+=input[i];
		}
		if(temp==100) {
			for(int i=0;i<answer.size();i++){
				answer[i]=input[i];
			}
			break;	
		}
		temp=0;
	}while(next_permutation(input.begin(),input.end()));
	*/
	/*
	while(1){
		for(int i=0;i<answer.size();i++){
			temp+=input[i];
		}
		
		if(temp==100){
			for(int i=0;i<answer.size();i++){
				answer[i]=input[i];
			}
			break;
		}else{
			front = input.front();
			for(int i=0;i<input.size()-1;i++){
				input[i]=input[(i+1)%input.size()];
			}
			input[input.size()-1]=front;
		}
		
		temp=0;
	}*/
	
	sort(begin(answer),end(answer));
	
	for(int i=0;i<answer.size();i++){
		cout<<answer[i]<<endl;
	}
	
	return 0;
}
