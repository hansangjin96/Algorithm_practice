#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** argv)
{
    int test_case;
    int T;
    string origin;
    string temp;
    bool t;
    cin>>T;
    for(test_case = 1; test_case <= T; ++test_case)
    {
        cin>>origin;
        for(int i=0;i<origin.size();i++)
        {
            temp +=origin[i];
             
            //cout<<"temp "<<temp<<" "<<endl;
             
            for(int j=i+1;j<i+1+temp.size();j++)// i=1
            {
                //cout<<"origin "<<origin[j]<<" "<<endl;
                    //cout<<"temp[j-temp.size()] "<<temp[j-temp.size()]<<" "<<endl;
                if(origin[j]==temp[j-temp.size()])//GALAXYGALAXY temp.size() = 6 , i = 5, j = 6บฮลอ 6+6
                {
                     
                    t=true;
                }else
                {
                    t = false;
                    break;
                }
            }
            //cout<<"origin "<<origin<<" "<<endl;
             
             //cout<<endl;
             
            if(t)
            {
                cout<<"#"<<test_case<<" "<<temp.size()<<endl;
                temp="";
                origin="";
                t=true;
                break;
            }
        }
    }
    return 0;
}
