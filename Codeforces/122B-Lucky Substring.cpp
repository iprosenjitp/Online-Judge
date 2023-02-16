#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    string str;
    cin >> str;
    int cnt4 = 0, cnt7 = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '4') cnt4++;
        if(str[i] == '7') cnt7++;
    }
    if(!cnt4 && !cnt7) cout << "-1\n";
    else {
        if(cnt4 < cnt7) cout << "7\n";
        else cout << "4\n";
    }
}
