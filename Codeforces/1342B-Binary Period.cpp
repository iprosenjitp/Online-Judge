#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '0') cnt0++;
            else cnt1++;
        }
        string s = "";
        if(!cnt0 || !cnt1) s = a;
        else {
            for(int i = 0; i < a.size(); i++) s += "01";
        }
        cout << s << "\n";
    }
}
