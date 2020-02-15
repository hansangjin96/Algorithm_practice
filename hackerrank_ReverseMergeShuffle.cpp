#include <bits/stdc++.h>

using namespace std;
int b[35],c[30],w[30],i,m,k,l,j,q,x,n,ma,mi,ann=0;
string s,ans;
void pr()
{
    for(int i=0;i<26;i++)cout<<b[i]<<" ";cout<<endl;
    for(int i=0;i<26;i++)cout<<c[i]<<" ";cout<<endl;
    cout<<"^^^^^^"<<endl;
}
int get (int i,int j)
{
    int I=i;
    for(int u=0;u<26;u++)w[u]=b[u];

    while(s[I]-'a'!=j && I<n)
    {
        w[s[I]-'a']--;
        if(w[s[I]-'a']<c[s[I]-'a'])break;I++;
    }

    if(s[I]-'a'==j)
    {
       while(s[i]-'a'!=j && b[s[i]-'a'])b[s[i]-'a']--,i++;

          c[s[i]-'a']--;
          b[s[i]-'a']--;
        ans+=s[i];
        ann=i+1;
        return 1;
    }
    return 0;
}
main()
{
          cin>>s;
          reverse(s.begin(),s.end());
          n=s.size();

          for(i=0;i<n;i++)b[s[i]-'a']++;
          for(i=0;i<26;i++)c[i]=b[i],c[i]/=2;


              for(int j=0;j<26;j++)
              {
                 if(c[j] && get(ann,j)){j=-1;}
              }



          cout<<ans<<endl;


}
