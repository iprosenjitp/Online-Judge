#include <bits/stdc++.h>
#define ll long long

using namespace std;

long long minimumTime(vector<int>& time, int totalTrips)
{
    long long left = 0, right = 1e14, ans = right;
    while(left < right){
        long long cnt = 0L;
        long long mid = (left+right)/2;
        for(int i = 0; i < time.size(); i++)
            cnt += (mid/time[i]);
        if(cnt >= totalTrips)
            ans = min(ans, mid), right = mid;
        else left = mid+1;
    }
    return ans;
}

int main()
{
    vector<int> time;
    for(int i = 0; i < 3; i++){
        int n;
        cin >> n;
        time.push_back(n);
    }
    int totalTrips;
    cin >> totalTrips;
    ll ans = minimumTime(time, totalTrips);
    cout << ans << "\n";
}

/**
1 2 3
5
*/
