#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int V[100005];
        bool ans = true;
        for(int i = 0, j = n-1, k = 0; i < n/2; i++, j--){
            if(s[i] != s[j]){
                V[k] = i;
                if(k && (V[k] - V[k-1]) > 1){
                    ans = false;
                    break;
                }
                k++;
            }
        }
        if(ans) cout << "Yes\n";
        else cout << "No\n";
    }
}
