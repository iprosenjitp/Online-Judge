#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, sum = 0, len = 0;
        cin >> n;

        for(int i = 0; sum+i <= n; i++){
            sum += i;
            len++;
        }
//        cout << len << " " << sum << "\n";
        int cntA = 0, cntB = 0;
        int i;
        for(i = 0; i < len; i++){
            if(i%4 <= 1) cntA += i;
            else cntB += i;
//            cout << cntA << " " << cntB << "\n";
        }
        if(i%4 <= 1) cntA += n-sum;
        else cntB += n-sum;

        cout << cntA << " " << cntB << "\n";
    }
}
