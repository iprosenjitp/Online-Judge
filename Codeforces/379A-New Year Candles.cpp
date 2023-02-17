#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int cnt = a;
    while(a >= b){
        cnt += a/b;
        a = a/b + a%b;
    }
    cout << cnt << "\n";
}
