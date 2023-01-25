#include <bits/stdc++.h>

using namespace std;

int A[300005];
int n;
int cnt = 0;

//int solve(int i, int j)
//{
//    if(j-i < 2) return 0;
//    if(__gcd(A[i], A[j]) == 1){
//            cnt += j-i-1;
//    }
//    solve(i+1, j);
//    solve(i, j-1);
//}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A, A+n);
    for(int i = 0; i < n-2; i++){
        for(int j = i+2; j < n; j++){
            if(__gcd(A[i], A[j]) == 1){
                cnt += j-i-1;
            }
        }
//        cout << __gcd(A[i], A[j]) << "\n";
//        if(__gcd(A[i], A[j]) == 1){
//            cnt += j-i-1;
//        }
    }
//    solve(0, n-1);
    cout << cnt << "\n";
}
