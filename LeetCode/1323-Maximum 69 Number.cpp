#include <bits/stdc++.h>
#define ll long long

using namespace std;

int maximum69Number (int num)
{
    string s = to_string(num);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '6') {
            s[i] = '9';
            break;
        }
    }
    int ans = stoi(s);
    return ans;
}

int main()
{
    int num;
    cin >> num;
    int ans = maximum69Number(num);
    cout << ans << "\n";
}
