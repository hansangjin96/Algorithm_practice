#include <bits/stdc++.h>

using namespace std;

// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    int min = 100000000;
    int key = k-1;
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<arr.size()-key;i++)
    {
        if(arr[i+key]-arr[i]<min && arr[i]>0)
        {
            min = arr[i+key]-arr[i];
        }
    }
    return min;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    int result = maxMin(k, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

