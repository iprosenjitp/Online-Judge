#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool divisorGame(int n)
{
    if(n&1) return false;
    else return true;
}

int main()
{
    int n;
    cin >> n;
    bool ans = divisorGame(n);
    if(ans) cout << "true\n";
    else cout << "false\n";
}
