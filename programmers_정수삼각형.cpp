#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int> > arr(500,vector<int>(500,-1));
vector<vector<int> > temp(500,vector<int>(500,-1));
vector<int> ans(500,0);
/*
    0 1 2 3 4
0   7
1   3 8
2   8 1 0
3   2 7 4 4
4   4 5 2 6 5

i j 0 1 2 3 4
0   7
1   10 15
2   18 16 15
3   20 25 20 19
4   24 30 27 26 24
*/

void maximum(int x,int y)//x=4, y=4
{
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<=y && j<=i;j++){
            if(j==0){
                temp[i][j] +=temp[i-1][j];
            }else if(i==j){
                temp[i][j] +=temp[i-1][j-1];
            }else{
                temp[i][j] += max(temp[i-1][j],temp[i-1][j-1]);
            }
        }
    }
    return ;
}

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    for(int i=0;i<triangle.size();i++)
    {
        for(int j=0;j<triangle[0].size();j++)
        {
            temp[i][j]=triangle[i][j];
        }
    }
    
    maximum(triangle.size()-1,triangle.size()-1);
    
    for(int i=0;i<triangle.size();i++)
    {
        answer = max(answer,temp[triangle.size()-1][i]);
    }
    /*
    sort(ans.begin(),ans.end(),greater<int>());
    
    
    answer=ans[0];
    */
    return answer;
}
