#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> V(n);
    for(int i = 0; i < n; i++) cin >> V[i];
    int l = 0, r = n-1;
    int serja = 0, dima = 0;
    int flag = 1, x;
    for(int i = 0; i < n; i++){
        if(V[l] > V[r]){
            x = V[l];
            l++;
        }
        else {
            x = V[r];
            r--;
        }
        if(flag) serja += x;
        else dima += x;
        flag = 1-flag;
    }
    cout << serja << " " << dima << "\n";
}
