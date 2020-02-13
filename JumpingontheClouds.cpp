#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int count=0;

    for(int i=0;i<c.size()-1;){
        if(!c[i+2]) i+=2;
        else i+=1;
        count++;
    }

    return count;

}

int main()
{

    int n;
    cin >> n;

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin>>c[i];
    }

    int result = jumpingOnClouds(c);

    cout << result << "\n";

    return 0;
}

