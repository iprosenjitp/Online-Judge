#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, A[] = {4, 7, 44, 47, 77, 444, 447, 477};
    cin >> n;
    for(int i = 0; i < 8; i++){
        if(n%A[i] == 0){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
