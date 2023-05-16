#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m, c;
    int cntM = 0, cntC = 0;
    while(n--){
        cin >> m >> c;
        if(m > c) cntM++;
        else if(c > m) cntC++;
    }
    if(cntM > cntC) cout << "Mishka\n";
    else if(cntC > cntM) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
}
