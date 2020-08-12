#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

long long solution(string expression) {
    long long answer = 0;
    string temp="";
    set<char> opers;
    vector<char> operv;
    //vector<vector<char>> oper2(6,vector<char>(3));
    
    vector<string> exv;
    vector<string> ex1;
    vector<string> ex2;
    vector<string> ex3;
    
    long long tempi=0;
    
    
    for(int i=0;i<expression.size();i++){
        if(expression[i]=='*'||expression[i]=='+'||expression[i]=='-'){
            exv.push_back(temp);
            temp="";
            temp+=expression[i];
            exv.push_back(temp);
            temp="";
            
            opers.insert(expression[i]);
        }else{
            temp+=expression[i];    
        }
        
        if(i==expression.size()-1) exv.push_back(temp);
    }
    
    
    for(auto i=opers.begin();i!=opers.end();i++){
        operv.push_back(*i);
    }
    
    if(operv.size()==1){
        tempi=atoll(exv[0].c_str());
   	    if(operv[0]=='*'){
            tempi*=atoll(exv[2].c_str());    
        }else if(operv[0]=='-'){
            tempi-=atoll(exv[2].c_str());
        }else{
            tempi+=atoll(exv[2].c_str());
        }
        answer = tempi;
    }else{
   		do{
        for(int i=0;i<exv.size();i++){
                temp = operv[0];
                if(exv[i]==temp){
                    tempi=atoll(ex1.back().c_str());
                    ex1.pop_back();
                    if(operv[0]=='*'){
                        tempi*=atoll(exv[i+1].c_str());    
                    }else if(operv[0]=='-'){
                        tempi-=atoll(exv[i+1].c_str());
                    }else{
                        tempi+=atoll(exv[i+1].c_str());
                    }

                    ex1.push_back(to_string(tempi));
                    i++;
                }else{
                    ex1.push_back(exv[i]);
                }
            }
        if(operv.size()>1){
            for(int i=0;i<ex1.size();i++){
                temp = operv[1];
                if(ex1[i]==temp){
                    tempi=atoll(ex2.back().c_str());
                    ex2.pop_back();
                    if(operv[1]=='*'){
                        tempi*=atoll(ex1[i+1].c_str());    
                    }else if(operv[1]=='-'){
                        tempi-=atoll(ex1[i+1].c_str());
                    }else{
                        tempi+=atoll(ex1[i+1].c_str());
                    }

                    ex2.push_back(to_string(tempi));
                    i++;
                }else{
                    ex2.push_back(ex1[i]);
                }
            }
        }

        if(operv.size()>2){
            for(int i=0;i<ex2.size();i++){
                temp = operv[2];
                if(ex2[i]==temp){
                    tempi=atoll(ex3.back().c_str());
                    ex3.pop_back();
                    if(operv[2]=='*'){
                        tempi*=atoll(ex2[i+1].c_str());    
                    }else if(operv[2]=='-'){
                        tempi-=atoll(ex2[i+1].c_str());
                    }else{
                        tempi+=atoll(ex2[i+1].c_str());
                    }

                    ex3.push_back(to_string(tempi));
                    i++;
                }else{
                    ex3.push_back(ex2[i]);
                }
            }
        }else if(operv.size()==2){
            if(abs(atoll(ex2[0].c_str()))>answer){
                answer =abs(atoll(ex2[0].c_str()));    
            }
        }

        if(operv.size()==3){
            if(abs(atoll(ex3[0].c_str()))>answer){
                answer = abs(atoll(ex3[0].c_str()));    
            }
        }
        
        ex1.clear();
        ex2.clear();
        ex3.clear();
    }while(next_permutation(operv.begin(),operv.end()));
    }
   
    return answer;
}



//21 22 23
