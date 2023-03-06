#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, m, temp = 0, ans;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        if(temp <= ceil((double)num/m)){
            temp = ceil((double)num/m);
            ans = i;
        }
    }
    cout << ans + 1 << "\n";
}
