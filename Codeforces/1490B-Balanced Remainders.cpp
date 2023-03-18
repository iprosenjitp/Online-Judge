#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int cnt0 = 0, cnt1 = 0, cnt2 = 0, ans = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(num%3 == 0) cnt0++;
            else if(num%3 == 1) cnt1++;
            else cnt2++;
        }
        int x = n/3;
        while(1){
            if(cnt0 > x){
                ans += (cnt0-x);
                cnt1 += (cnt0-x);
                cnt0 = x;
            }
            if(cnt1 > x){
                ans += (cnt1-x);
                cnt2 += (cnt1-x);
                cnt1 = x;
            }
            if(cnt2 > x){
                ans += (cnt2-x);
                cnt0 += (cnt2-x);
                cnt2 = x;
            }
            if(cnt0 == cnt1 && cnt1 == cnt2) break;
        }
        cout << ans << "\n";
    }
}
