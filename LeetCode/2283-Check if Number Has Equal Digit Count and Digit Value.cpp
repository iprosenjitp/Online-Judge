#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool digitCount(string num)
{
    int len = num.size();
    vector<int> V(10);
    for(int i = 0; i < len; i++)
        V[num[i] - '0']++;
//    for(int i = 0; i < V.size(); i++) cout << V[i] << " ";
//    cout << "\n";
    for(int i = 0; i < len; i++)
        if(num[i]-'0' != V[i]) return false;
    return true;
}

int main()
{
    string num;
    cin >> num;
    bool ans = digitCount(num);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
