#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> sortPeople(vector<string>& names, vector<int>& heights)
{
    vector<pair<int, string>> V;
    vector<string> ans;
    for(int i = 0; i < names.size(); i++) V.push_back({heights[i], names[i]});
    sort(V.begin(), V.end());
    for(int i = 0; i < names.size(); i++) ans.push_back(V[i].second);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<string> names;
    vector<int> heights;
    for(int i = 0; i < 3; i++){
        string name;
        cin >> name;
        names.push_back(name);
    }
    for(int i = 0; i < 3; i++){
        int height;
        cin >> height;
        heights.push_back(height);
    }
    vector<string> ans = sortPeople(names, heights);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}

/*
Mary John Emma
180 165 170
*/
