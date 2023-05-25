#include <bits/stdc++.h>
#define ll long long

using namespace std;

string removeDuplicates(string s)
{
    vector<char> A;
    for(int i = 0; i < s.size(); i++){
        if(A.empty()) A.push_back(s[i]);
        else{
            if(A.back() == s[i]) A.pop_back();
            else A.push_back(s[i]);
        }
    }
    string ans = "";
    for(int i = 0; i < A.size(); i++) ans += A[i];
    return ans;
}

int main()
{
    string s;
    cin >> s;
    string ans = removeDuplicates(s);
    cout << ans << "\n";
}
