#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string b, a = "";
        cin >> b;
        for(int i = 0; i < b.size()-1; i += 2) a += b[i];
        a += b[b.size()-1];
        cout << a << "\n";
    }
}
