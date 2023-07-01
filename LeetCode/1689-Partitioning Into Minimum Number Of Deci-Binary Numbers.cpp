#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minPartitions(string n)
{
    char ch = 0;
    for(int i = 0; i < n.size(); i++)
        if(ch < n[i]) ch = n[i];
    return ch - '0';
}

int main()
{
    string n;
    cin >> n;
    int ans = minPartitions(n);
    cout << ans << "\n";
}
