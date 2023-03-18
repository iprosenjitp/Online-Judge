#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, A[10];
    cin >> n;
    for(int i = 0; i < 7; i++) cin >> A[i];
    int cnt = 0, i;
    while(cnt < n){
        for(i = 0; i < 7; i++){
            cnt += A[i];
            if(cnt >= n) break;
        }
    }
    cout << i+1 << "\n";
}
