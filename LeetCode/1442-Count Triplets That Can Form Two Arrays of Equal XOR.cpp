#include <bits/stdc++.h>

using namespace std;

int countTriplets(vector<int>& arr)
{
    int cnt = 0;
    for(int i = 0; i < arr.size()-1; i++){
        int xorSum = arr[i];
        for(int j = i+1; j < arr.size(); j++){
            xorSum ^= arr[j];
            if(!xorSum) cnt += j-i;
        }
    }
    return cnt;
}

int main()
{
    vector<int> arr;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }
    int ans = countTriplets(arr);
    cout << ans << "\n";
}

/*
2 3 1 6 7
*/
