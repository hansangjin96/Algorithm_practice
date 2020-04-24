#include<iostream>
#include<vector>

using namespace std;

int N=4;
vector<vector<int> > ans(N,vector<int>(N,-1));
vector<vector<int> > arr={{6,7,12,5},{5,3,11,18},{7,17,3,3},{8,10,14,9}};

int shortest(int i, int j)
{
	if(ans[i][j]!=-1) return ans[i][j]; 
	if(i==0&&j==0){
		ans[i][j] = arr[i][j];
	}else if(i==0){
		ans[i][j] = shortest(0,j-1) + arr[i][j];
	}else if(j==0){
		ans[i][j] = shortest(i-1,0) + arr[i][j];
	}else{
		ans[i][j] = min(shortest(i,j-1),shortest(i-1,j)) + arr[i][j];
	}
	return ans[i][j];
}

void printPath(int x,int y)
{
	cout<<"x : "<<x<<" y: "<<y<<endl;
	if(x==0&&y==0) return;
	if(ans[x-1][y]<ans[x][y-1]){
		printPath(x-1,y);
	}else{
		printPath(x,y-1);
	}
		
	
}


int main(void)
{
	shortest(3,3);
	printPath(3,3);
	cout<<endl;
	for(int i=0;i<arr.size();i++)
	{
		for(int j=0;j<arr[0].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
