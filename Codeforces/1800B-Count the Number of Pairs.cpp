#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int cap[26], sma[26];
        for(int i = 0; i < 26; i++){
            cap[i] = 0;
            sma[i] = 0;
        }
        int n, k, cnt = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z') sma[s[i] - 'a']++;
            else cap[s[i] - 'A']++;
        }
        for(int i = 0; i < 26; i++){
            int x = min(cap[i], sma[i]);
            cnt += x;
            if(k > 0){
                int rem = max(cap[i], sma[i]) - x;
                int y = rem/2;
                if(y <= k){
                    cnt += y;
                    k -= y;
                }
                else {
                    cnt += k;
                    k = 0;
                }
            }
        }
        cout << cnt << "\n";
    }
}
