#include <bits/stdc++.h>
#define ll long long

using namespace std;

int firstUniqChar(string s)
{
    vector<int> A(26);
    for(int i = 0; i < s.size(); i++) A[s[i]-'a']++;
    int ans = INT_MAX;
    for(int i = 0; i < 26; i++){
        if(A[i] == 1){
            int found = s.find('a'+i);
            ans = min(ans, found);
        }
    }
    if(ans == INT_MAX) return -1;
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int ans = firstUniqChar(s);
    cout << ans << "\n";
}
