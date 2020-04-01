#include <stdio.h>
  
#define swap(a,b) {int t;t=a;a=b;b=t;}
#define max(a,b) ((a)>(b)? (a):(b))
int main()
{
    int t,i,T,j;
    int n,m,idx;
    int cnt,top[2];
    char s[7];
  
    scanf("%d", &T);
    for (t = 1; t <= T; t++) {
  
        scanf("%s %d", s,&n);
        cnt = n;
          
        for (i = 0; s[i] != '\0'; i++);
        idx = i;
      
        for (i = 0; i < idx; i++) {
            top[0] = 0;
            for (j = idx - 1; j > i; j--) {
                if (top[0] < s[j]) {
                    top[0] = max(top[0], s[j]);
                    top[1] = j;
                }
            }
              
            if (s[i] < top[0]) {
                swap(s[i], s[top[1]]);
                cnt--;
            }
              
            if (cnt == 0) break;
        } 
        int r = 0;
        if (cnt == 0&&n>1) {
  
            for (j = 0; j < idx - n - 1; j++) {
                if (s[j] == s[j + 1]) r++;
            }
            //printf("%d\n", r);
                if (r > 1) {
                    int st = r > n ? n : r;
                    for (i = 1; i < st; i++) {
                        if (s[idx - st] < s[idx - st+i]) swap(s[idx - st], s[idx - st+i]);
                    }
                }
              
        }
        else if (cnt > 0) {
            int flag = 0;
            for (i = 0; i < idx - 2; i++) {
                if (s[i] == s[i + 1]) {
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                for (j = 0; j < cnt; j++) swap(s[idx - 1], s[idx - 2]);
            }
        }
        printf("#%d ", t);
        printf("%s\n", s);
          
    }
  
    return 0;
}
