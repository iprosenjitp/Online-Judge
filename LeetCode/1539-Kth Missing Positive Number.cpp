#include <bits/stdc++.h>
#define ll long long

using namespace std;

int findKthPositive(vector<int>& arr, int k)
{
    int j = 0, miss = 0;
    for(int i = 1 ; i <= arr.back(); i++){
        if(arr[j] == i) j++;
        else miss++;
        if(miss == k) return i;
    }
    return arr.back()+(k-miss);
}

int main()
{
    vector<int> arr;
    int k;
    for(int i = 0; i < 4; i++){
        int n;
        cin >> n;
        arr.push_back(n);
    }
    cin >> k;
    int ans = findKthPositive(arr, k);
    cout << ans << "\n";
}


/**
2 3 4 7 11
5

1 2 3 4
2
*/
