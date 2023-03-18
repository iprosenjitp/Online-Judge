#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int lenA = a.length();
    int lenB = b.length();
    if(a == b) cout << "-1\n";
    else{
        if(lenA > lenB) cout << lenA << "\n";
        else cout << lenB << "\n";
    }
}
