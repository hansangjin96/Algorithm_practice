#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#define MAX 9999999999
using namespace std;

//�Ҽ� �Ǻ�  
bool isPrime(int number)
{
    if (number == 1)//1 = false 
        return false;
    if (number == 2)//2 = true
        return true;
    if (number % 2 == 0) // ¦�� false 
        return false;

    bool isPrime = true; //������±��? 
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number% i == 0)
            return false;
    }

    return isPrime;
}

bool compare(char a, char b)
{
    return a > b;
}

int solution(string numbers) {
    int answer = 0;

    string temp;//17
    temp = numbers;

    sort(temp.begin(), temp.end(),greater<int>());//71
    
    cout<<"sort result : "<<temp<<endl;

    vector<bool> prime(stoi(temp)+1);//72���� bool�� ���� 

    cout << "stoi : "<<stoi(temp) << endl;
    
    prime[0] = false;//prime vector�� 0��° ���� false 
    
	for (long long i = 1; i < prime.size(); i++)
    {
        prime[i] = isPrime(i);//�Ҽ����� �Ǻ� 
    }
    //cout << "chk1" << endl;
    //int num = std::stoi(numbers);

    string s, sub;

    s = numbers;//17

    sort(s.begin(), s.end());//17
    
    for(int i=0;i<s.size();i++)
    {
    	cout<<"s[i] = "<<s[i]<<" ";
	}
	
	cout<<endl;
    
    set<int> primes;//1379
    int l = s.size();
    
    //���Ⱑ ��� ����� �� ¥�� �� �� 
    do {
    	cout<<"s : "<<s<<endl;
        for (int i = 1; i <= l; i++)
        {
            sub = s.substr(0, i);
          	cout << "chk2" <<  " " << sub<<  endl;
            if (prime[std::stoi(sub)])
            {
                primes.insert(std::stoi(sub));
            }
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << primes.size()<<endl;
    answer = primes.size();
    return answer;
}

int main(void)
{
	string number = "1937";
	int ans =solution(number);
	cout<<"ans : "<<ans<<endl;
	return 0;
}
