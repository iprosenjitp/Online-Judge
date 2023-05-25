#include <bits/stdc++.h>
#define ll long long

using namespace std;

string greatestLetter(string s)
{
    vector<int> A(26), B(26);
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') A[s[i]-'a']++;
        else if(s[i] >= 'A' && s[i] <= 'Z') B[s[i]-'A']++;
    }
    string ans = "";
    for(int i = 25; i >= 0; i--){
        if(A[i] && B[i]) {
            ans += 'A' + i;
            break;
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    string ans = greatestLetter(s);
    cout << ans << "\n";
}
