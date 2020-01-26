#include<iostream>
#include<vector>
#include<queue>
#define MAX 32001

using namespace std;

int n,indegree[MAX],result[MAX];
vector<int> a[MAX];

void topologySort()
{
	queue<int> q;
	
	//진입차수가 0인 노드를 q에 삽입 
	for(int i=1;i<=n;i++)
	{
		if(indegree[i]==0)
		{
			q.push(i);
		}
	}
	
	//정렬이 되려면 n개의 노드를 방문
	for(int i=1;i<=n;i++)
	{
		int x = q.front();//1
		q.pop();
		result[i] = x;//result[0] == 1
		for(int j=0;j<a[x].size();j++)//a[1] 노드 1과 연결된 노드 개수만큼 
		{
			int y=a[x][j];//y=1과 연결된 노드들  
			//새롭게 진입차수가 0이 된 정점을 q에 삽입
			if(--indegree[y]==0)
			{
				q.push(y);
			} 
		}
	 } 
	 for(int i=1;i<=n;i++)
	 {
	 	printf("%d ",result[i]);
	 }
}

int main(void)
{
	int m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		int x,y;
		scanf("%d %d",&x, &y);
		a[x].push_back(y);
		indegree[y]++;
	}
	topologySort();
}
