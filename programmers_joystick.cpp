#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string name) {
    int answer = 0;
    //name = "JAAANA" "AAAANA" "ASLKNLDNLNA"
    int tempSize = name.size();
    int count = 0;
    vector<char> temp(tempSize,'A');
    
    //cout<<'A'-'A';
    
    
    for(int i=0;i<tempSize;i++)
    {
        int length = name[i]-temp[i];
        
        if(length>13)//after N
        {
            length = temp[i]-name[i]+26;
        }
        
        answer+=length;
        
    }
    
    answer+=tempSize-1;

    for(int i=1;i<tempSize;i++)
    {
        if(name[i]=='A'){
            --answer;
        }else{
            break;
        }
    }
    for(int i=tempSize-1;i>=0;i--)
    {
        if(name[i]=='A'&&name[1]!='A'){
            --answer;
        }else{
            break;
        }
    }
    //���ĺ� = 26��
    //N = 13��°
    //13���� Ŭ ��� �Ʒ�Ŀ���� �̵��ϴ°� ����
    //AZAZZA
    return answer;
}
