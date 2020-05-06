#include <iostream>
#include <algorithm>
using namespace std;

int n;
int card[1001];
int dp[10001];



void input() {
	ios_base::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> card[i];
	}
}

void solution() {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + card[j]);
			cout<<"i: "<<i<<" i-j: "<<i-j<<" j: "<<j<<"  dp[i]: "<<dp[i]<<" dp[i - j] + card[j]: "<<dp[i - j] + card[j]<<endl; 
		}
		cout<<endl;
	}
}

void printAnswer() {
	cout << dp[n] << "\n";
}

int main()
{
	input();		//구매하려는 카드의 개수와 카드팩 값을 입력
	solution();     //dp를 이용하여 지불해야하는 금액의 최댓값 구하기
	printAnswer();  //결과 출력
}
