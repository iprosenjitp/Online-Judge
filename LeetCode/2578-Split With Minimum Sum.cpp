#include <bits/stdc++.h>
#define ll long long

using namespace std;

int splitNum(int num)
{
    string s = to_string(num);
    sort(s.begin(), s.end());
    string n1 = "", n2 = "";
    for(int i = 0; i < s.length(); i++){
        if(i%2) n2 += s[i];
        else n1 += s[i];
    }
    return stoi(n1) + stoi(n2);
}

int main()
{
    int num;
    cin >> num;
    int ans = splitNum(num);
    cout << ans << "\n";
}
