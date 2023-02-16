#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string W;
    cin >> W;
    for(int i = 1; i < W.length(); i++){
        if(W[i] >= 'a' && W[i] <= 'z') {
            cout << W << "\n";
            return 0;
        }
    }
    for(int i = 0; i < W.length(); i++){
        if(W[i] >= 'a' && W[i] <= 'z') W[i] = 'A' + (W[i] - 'a');
        else W[i] = 'a' + (W[i] - 'A');
    }
    cout << W << "\n";
}
