#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    string t;
    cin >> n >> t;
    if(t.length() > n) cout << "-1";
    else {
        cout << t;
        for(int i = 0; i < n-t.length(); i++) cout << "0";
    }
    cout << "\n";
}
