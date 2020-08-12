#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int temp=1;
    float ld=0,rd=0;
    int x=1,y=1,lx=3,ly=0,rx=3,ry=2;
    int lloc=-1,rloc =-2;
    
    vector<vector<int>> phone(4,vector<int>(3,0));
    
    for(int i=0;i<phone.size()-1;i++){
        for(int j=0;j<phone[i].size();j++){
            phone[i][j]=temp++;
        }
    }
    phone[3][0] =-1;
    phone[3][2] =-2;

    for(int i=0;i<numbers.size();i++){
        for(int j=0;j<phone.size();j++){
                for(int k=0;k<phone[j].size();k++){
                    if(phone[j][k]==numbers[i]){
                        x=j;
                        y=k;
                    }else if(phone[j][k]==rloc){
                        rx=j;
                        ry=k;
                    }else if(phone[j][k]==lloc){
                        lx=j;
                        ly=k;
                    }
                }
            }
        
        if(numbers[i]==1||numbers[i]==4||numbers[i]==7){
            lloc = numbers[i];
            answer+='L';
        }else if(numbers[i]==3||numbers[i]==6||numbers[i]==9){
            rloc = numbers[i];
            answer+='R';
        }
        else if(numbers[i]==0||numbers[i]==2||numbers[i]==5||numbers[i]==8){
            
            //cout<<x<<" "<<y<<endl;
            //cout<<lx<<" "<<ly<<endl<<rx<<" "<<ry<<endl;
            /*
            rd = sqrt(pow(x-rx,2)+pow(y-ry,2));
            ld = sqrt(pow(x-lx,2)+pow(y-ly,2));
            */
            rd = abs(x-rx)+abs(y-ry);
            ld = abs(x-lx)+abs(y-ly);
            //cout<<ld<<" "<<rd<<endl;
            if(ld>rd){
                rloc = numbers[i];
                answer+='R';
            }else if(ld<rd){
                lloc = numbers[i];
                answer+='L';
            }else if(ld==rd){
                if(hand=="right"){
                    rloc = numbers[i];
                    answer+='R';
                }else{
                    lloc = numbers[i];
                    answer+='L';
                }
            }
        }
    }
        
    return answer;
}
