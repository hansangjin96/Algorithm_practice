#include<bits/stdc++.h>

using namespace std;

int main(void){
	int n=0,m=0,x=0,y=0,k=0,cx=0,cy=0,dx=0,dy=0;
	int temp=0,tempd=0;
	cin>>n>>m>>x>>y>>k;
	
	vector<int> dir(k,0);
	
	vector<vector<int>> tmap(n,vector<int>(m,0));
	vector<vector<int>> dice(4,vector<int>(3,0));
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>tmap[i][j];
		}
	}
	
	for(int i=0;i<k;i++){
		cin>>dir[i];
	}
	/*
	cout<<"\n";
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<tmap[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	
	for(int i=0;i<k;i++){
		
		//cout<<" x: "<<x<<" y: "<<y<<endl; 
		//����	
		if(dir[i]==4){
			//map ������ ���� �� 
			if(x+1>=n) continue;
			x++;
			
			//�ֻ��� ��ĭ�� ������ 
			tempd=dice[3][1];
			dice[3][1]=dice[2][1];
			dice[2][1]=dice[1][1];
			dice[1][1]=dice[0][1];
			dice[0][1]=tempd;
			
			//�ֻ��� ��ġ �̵�
			if(tmap[x][y]==0){
				tmap[x][y]=dice[3][1];
			}else{
				dice[3][1]=tmap[x][y];
				tmap[x][y]=0;
			}
			
			cout<<dice[1][1]<<"\n";
			
		}else if(dir[i]==1){
			if(y+1>=m) continue;
			y++;
			
			tempd = dice[1][0];
			dice[1][0]=dice[3][1];
			dice[3][1]=dice[1][2];
			dice[1][2]=dice[1][1];
			dice[1][1]=tempd;
			
			//�ֻ��� ��ġ �̵�
			if(tmap[x][y]==0){
				tmap[x][y]=dice[3][1];
			}else{
				dice[3][1]=tmap[x][y];
				tmap[x][y]=0;
			}
			
			cout<<dice[1][1]<<"\n";
		}else if(dir[i]==3){
			if(x-1<0) continue;
			x--;
			
			tempd = dice[0][1];
			dice[0][1]=dice[1][1];
			dice[1][1]=dice[2][1];
			dice[2][1]=dice[3][1];
			dice[3][1]=tempd;
			
			//�ֻ��� ��ġ �̵�
			if(tmap[x][y]==0){
				tmap[x][y]=dice[3][1];
			}else{
				dice[3][1]=tmap[x][y];
				tmap[x][y]=0;
			}
			
			cout<<dice[1][1]<<"\n";
		}else if(dir[i]==2){
			if(y-1<0) continue;
			y--;
			
			tempd = dice[1][0];
			dice[1][0]=dice[1][1];
			dice[1][1]=dice[1][2];
			dice[1][2]=dice[3][1];
			dice[3][1]=tempd;
			
			//�ֻ��� ��ġ �̵�
			if(tmap[x][y]==0){
				tmap[x][y]=dice[3][1];
			}else{
				dice[3][1]=tmap[x][y];
				tmap[x][y]=0;
			}
			
			cout<<dice[1][1]<<"\n";
		}
		/*
		//�ֻ��� ��� 
		for(int j=0;j<4;j++){
			for(int w=0;w<3;w++){
				cout<<dice[j][w]<<" ";
			}
			cout<<"\n";
		}*/
	}
	
	return 0;
}
