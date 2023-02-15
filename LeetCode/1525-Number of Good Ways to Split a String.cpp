#include <bits/stdc++.h>
#define ll long long

using namespace std;

int numSplits(string s)
{
    int A[26], B[26];
    for(int i = 0; i < 26; i++) A[i] = 0;
    for(int i = 0; i <= 26; i++) B[i] = 0;
    int cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(A[s[i]-'a'] == 0) {
            cnt++;
            A[s[i]-'a'] = 1;
            B[cnt] = i;
        }
        if(cnt >= 26) break;
    }
    if(cnt == 1) return s.length();
    if(cnt == 2) return 1;
    int mid = cnt/2;
    if(cnt%2) mid++;
    int ans = B[mid+1] - B[mid];
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int ans = numSplits(s);
    cout << ans << "\n";
}
