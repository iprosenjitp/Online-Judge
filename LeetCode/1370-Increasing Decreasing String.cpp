#include <bits/stdc++.h>
#define ll long long

using namespace std;

string sortString(string s)
{
    string ans = "";
    vector<int> A(26);
    int maxVal = 0;
    for(int i = 0; i < s.size(); i++){
        int ind = s[i]-'a';
        A[ind]++;
        if(A[ind] > maxVal) maxVal = A[ind];
    }
    int flag = 0;
    while(maxVal--){
        string subS = "";
        for(int i = 0; i < 26; i++){
            if(A[i]){
                subS += 'a'+i;
                A[i]--;
            }
        }
        if(flag) reverse(subS.begin(), subS.end());
        ans += subS;
        flag = 1-flag;
        subS = "";
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    string ans = sortString(s);
    cout << ans << "\n";
}
