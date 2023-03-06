#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < n-2; i++){
            while(str[i] == str[i+2] && i < n-2) i++;
            cnt++;
        }
        if(str[n-3] != str[n-1]) cnt++;
        cout << cnt << "\n";
    }
}
