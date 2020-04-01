#include <stdio.h>
  
int T, n;
int arr[11][11];
int di_x[4] = { 1,0,-1,0 };
int di_y[4] = { 0,1,0,-1 };
  
int main()
{
    scanf("%d", &T);
    for (int testcase = 1; testcase <= T; testcase++)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++) arr[i][j] = 0;
        }
  
        arr[0][0] = 1;
        int x = 0, y = 0, num = 2, k = 0;
        while (1)
        {
            if (x + di_x[k] < 0 || x + di_x[k] >= n || y + di_y[k] < 0 || y + di_y[k] >= n || arr[y + di_y[k]][x + di_x[k]] != 0) k = (k + 1) % 4;
            if (arr[y + di_y[k]][x + di_x[k]] == 0) arr[y + di_y[k]][x + di_x[k]] = num++;
            x += di_x[k];
            y += di_y[k];
            if (num > n * n) break;
        }
        printf("#%d\n",testcase);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++) printf("%d ",arr[i][j]);
            printf("\n");
        }
    }
}
