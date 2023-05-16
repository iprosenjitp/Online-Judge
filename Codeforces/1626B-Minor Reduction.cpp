#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string x;
        cin >> x;
        int len = x.size();
        int flag = 0, sum, flagSum, i;
        for(i = 0; i < len-1; i++){
            int m = x[i]-'0';
            int n = x[i+1]-'0';
            sum = m+n;
            if(sum >= 10) {
                flagSum = sum;
                flag = i;
            }
        }
        string ans = "";
        sum = flagSum;
        i = flag;
        if(flag){
            ans += x.substr(0, i) + to_string(sum) + x.substr(i+2, len-i-2);
        }
        else{
            int sum = (x[0]-'0') + (x[1]-'0');
            ans += to_string(sum) + x.substr(2, len-2);
        }
        cout << ans << "\n";
    }
}
