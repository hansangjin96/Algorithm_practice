#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int test_case;
    int T,day=0;
    long long money=0;
    vector<int> buy;
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        cin>>day;
        vector<int> price(day,0);
        for(int i=0;i<day;i++)
        {
            cin>>price[i];
        }
         
        for(int i=day-1;i>=0;i--)
        {
            if(price[i-1]<price[i])
            {
                int j=1;
                while(1){
                    if(price[i-j]>price[i] || (i-j) == -1) break;
                    money += price[i] - price[i-j];
                    ++j;
                    //cout<<"money : = "<<money<<endl;
                }
                i=i-j+1;
            }
        }
         
         
        cout<<"#"<<test_case<<" "<<money<<endl;
         
        price.clear();
        money = 0;
         
    }
    return 0;
}
