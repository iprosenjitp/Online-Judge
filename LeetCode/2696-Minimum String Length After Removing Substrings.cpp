#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minLength(string s)
{
    string temp;
    while(1){
        int foundAB = s.find("AB");
        int flagAB = 1;
        if(foundAB != -1) {
            temp = s.substr(0, foundAB);
            temp += s.substr(foundAB+2, s.size()-foundAB-2);
            s = temp;
        }
        else flagAB = 0;
        int foundCD = s.find("CD");
        int flagCD = 1;
        if(foundCD != -1) {
            temp = s.substr(0, foundCD);
            temp += s.substr(foundCD+2, s.size()-foundCD-2);
            s = temp;
        }
        else flagCD = 0;
        if(!flagAB && !flagCD) break;
    }
    return s.size();
}

int main()
{
    string s;
    cin >> s;
    int ans = minLength(s);
    cout << ans << "\n";
}
