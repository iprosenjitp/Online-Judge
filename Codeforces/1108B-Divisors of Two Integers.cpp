#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B;
    for(int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end());
    int x = A.back(), y;
    for(int i = 0; i < n; i++){
        if(x%A[i] == 0 && binary_search(B.begin(), B.end(), A[i]) == false){
            B.push_back(A[i]);
            A[i] = -1;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(A[i] != -1){
            y = A[i];
            break;
        }
    }
    cout << x << " " << y << "\n";
}
