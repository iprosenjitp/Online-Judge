#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> shortestToChar(string s, char c)
{
    vector<int> ind;
    vector<int> ans;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == c) ind.push_back(i);
    }
    for(int i = 0; i < ind.size(); i++) cout << ind[i] << " ";
    cout << "\n";
    int j = 0;
    int a = ind[j];
    int b = ind[j];
    for(int i = 0; i < s.size(); i++){
        cout << a << " " << b << "\n";
        int x = min(abs(a-i), abs(b-i));
        ans.push_back(x);
        if(i == b){
            a = b;
            if(b != ind[ind.size()-1])
                b = ind[++j];
        }
    }
    return ans;
}

int main()
{
    string s;
    char c;
    cin >> s >> c;
    vector<int> ans = shortestToChar(s, c);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/**
loveleetcode e
*/
