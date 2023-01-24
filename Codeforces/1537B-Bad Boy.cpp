#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        int x1 = 1, y1= 1, x2 = n, y2 = m;
        if(n != 1 && m != 1){
            if(i == x1 && j == y1){
                if(n == 1) y1++;
                else x1++;
            }
            else if(i == x2 && j == y2){
                if(n == 1) y2--;
                else x2--;
            }
        }
        cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
    }
}
