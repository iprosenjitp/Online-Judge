#include <bits/stdc++.h>

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr)
{
    int ans = 0;
    int len = arr.size();
    for(int i = 0; i < len; i++){
        int start = len - i;
        int end = i+1;
        int total = start*end;
        int odd = total/2;
        if(total%2) odd++;
        ans += odd * arr[i];
    }
    return ans;
}

int main()
{
    vector<int> V;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        V.push_back(n);
    }
    int ans = sumOddLengthSubarrays(V);
    cout << ans << "\n";
}
