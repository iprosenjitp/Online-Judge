#include <bits/stdc++.h>
#define ll long long

using namespace std;

int numberOfMatches(int n)
{
    int ans = 0;
    while(n != 1){
        ans += n/2;
        int temp = n;
        n /= 2;
        if(temp%2) n++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = numberOfMatches(n);
    cout << ans << "\n";
}
