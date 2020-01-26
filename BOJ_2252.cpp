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
	
	//���������� 0�� ��带 q�� ���� 
	for(int i=1;i<=n;i++)
	{
		if(indegree[i]==0)
		{
			q.push(i);
		}
	}
	
	//������ �Ƿ��� n���� ��带 �湮
	for(int i=1;i<=n;i++)
	{
		int x = q.front();//1
		q.pop();
		result[i] = x;//result[0] == 1
		for(int j=0;j<a[x].size();j++)//a[1] ��� 1�� ����� ��� ������ŭ 
		{
			int y=a[x][j];//y=1�� ����� ����  
			//���Ӱ� ���������� 0�� �� ������ q�� ����
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
