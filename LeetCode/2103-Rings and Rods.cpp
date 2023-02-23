#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countPoints(string rings)
{
    int ans = 0, A[10];
    for(int i = 0; i < 10; i++) A[i] = 0;
    for(int i = 0; i < rings.length(); i += 2){
        int clr = rings[i] == 'B'? 1 : rings[i] == 'G'? 2 : 4;
        int rod = rings[i+1] - '0';
        A[rod] |= clr;
    }
    for(int i = 0; i < 10; i++) ans += A[i] == 7;
    return ans;
}

int main()
{
    string str;
    cin >> str;
    int ans = countPoints(str);
    cout << ans << "\n";
}
