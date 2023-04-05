#include <bits/stdc++.h>
#define ll long long

using namespace std;

int cnt[5];

int main()
{
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        cnt[x%5]++;
    }
    int taxi = cnt[3]+cnt[4];
    if(cnt[1] <= cnt[3]) cnt[1] = 0;
    else cnt[1] = cnt[1]-cnt[3];
    taxi += cnt[2]/2;
    if(cnt[2]%2) {
        taxi++;
        if(cnt[1] <= 2) cnt[1] = 0;
        else cnt[1] = cnt[1]-2;
    }
    taxi += cnt[1]/4;
    if(cnt[1]%4) taxi++;
    cout << taxi << "\n";
}
