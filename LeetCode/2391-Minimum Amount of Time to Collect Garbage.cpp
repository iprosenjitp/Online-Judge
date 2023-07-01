#include <bits/stdc++.h>
#define ll long long

using namespace std;

int garbageCollection(vector<string>& garbage, vector<int>& travel)
{
    vector<int> last(128);
    int ans = 0;
    for(int i = 0; i < garbage.size(); i++){
        ans += garbage[i].size();
        for(char c : garbage[i]) last[c] = i;
    }
    for(int i = 1; i < travel.size(); i++) travel[i] += travel[i-1];
    for(char c : "PGM")
        if(last[c]) ans += travel[last[c] - 1];
    return ans;
}

int main()
{
    vector<string> garbage(4);
    vector<int> travel(3);
    for(int i = 0; i < garbage.size(); i++) cin >> garbage[i];
    for(int i = 0; i < travel.size(); i++) cin >> travel[i];
    int ans = garbageCollection(garbage, travel);
    cout << ans << "\n";
}

/**
G P GP GG
2 4 3
*/
