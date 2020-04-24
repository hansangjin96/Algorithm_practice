#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<long long> arr(81,-1);

long long fibo(long long N){
    if(N==2|| N==1)
    {
        return 1;
    }else if(arr[N]!=-1){
        return arr[N];
    }else{
        arr[N] = fibo(N-1)+fibo(N-2);
        return arr[N];
    }
}
//1 1 2 3 5 8
long long solution(int N) {
    long long answer = 0;
    for(int i=0;i<3;i++)
    {
        arr[i]=1;
    }
    fibo(N);
    
    if(N==1) answer = 4;
    if(N==2) answer = 6;
    answer = 2*(arr[N]+arr[N-1])+2*(arr[N-1]+arr[N-2]);
    return answer;
}
