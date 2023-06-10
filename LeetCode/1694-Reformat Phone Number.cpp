#include <bits/stdc++.h>
#define ll long long

using namespace std;

string reformatNumber(string number)
{
    string s = "";
    for(int i = 0; i < number.size(); i++){
        if(number[i] == ' ' || number[i] == '-') continue;
        s += number[i];
    }
    cout << s << "\n";
    int n = s.size();
    string ans = "";
    while(1){
        if(n == 2 || n == 3){
            ans += s;
            break;
        }
        else if(n == 4){
            ans += s.substr(0, 2) + '-' + s.substr(2, 2);
            break;
        }
        else{
            ans += s.substr(0, 3);
            s = s.substr(3, n-3);
        }
        ans += '-';
        n = s.size();
    }
    return ans;
}

int main()
{
    string number;
    getline(cin, number);
    string ans = reformatNumber(number);
    cout << ans << "\n";
}
