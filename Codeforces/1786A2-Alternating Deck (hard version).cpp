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
        int cntAw = 0, cntAb = 0, cntBw = 0, cntBb = 0;
        int i;
        for(i = 0; i < len; i++){
            if(i%4 <= 1){
                cntAw += i/2;
                cntAb += i/2;
                if(i%2) cntAw++;
            }
            else{
                cntBw += i/2;
                cntBb += i/2;
                if(i%2) cntBb++;
            }
        }
        int rem = n - sum;
        if(i%4 <= 1){
            cntAw += rem/2;
            cntAb += rem/2;
            if(rem%2) cntAw++;
        }
        else{
            cntBw += rem/2;
            cntBb += rem/2;
            if(rem%2) cntBb++;
        }
        cout << cntAw << " " << cntAb << " " << cntBw << " " << cntBb << "\n";
    }
}

