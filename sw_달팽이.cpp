#include<bits/stdc++.h>

using namespace std;

int main(void){
	//달팽이 방향 
	int dx[] = {0,1,0,-1};
	int dy[] = {1,0,-1,0};
	
	int x=0,y=0,dir=0,nx=0,ny=0;
	int N=0;
	cin>>N;
	//N*N 2차원 배열 
	vector<vector<int> > arr(N,vector<int>(N,0));
	
	for(int i=1;i<=N*N;i++){
		arr[x][y]=i;
		
		nx = x + dx[dir];
		ny = y + dy[dir];
		
		if(nx>=N || ny>=N || nx<0 || ny<0 || arr[nx][ny]){
			dir = (dir+1)%4;
			nx = x + dx[dir];
			ny = y + dy[dir];
		}
		x=nx;
		y=ny;
	}	
	
	
	//출력 
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
