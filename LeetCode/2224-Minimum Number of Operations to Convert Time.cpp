#include <bits/stdc++.h>
#define ll long long

using namespace std;

int convertTime(string current, string correct)
{
    int hr = stoi(current.substr(0, 2));
    int mi = stoi(current.substr(3, 2));
    int x = (hr*60) + mi;
    hr = stoi(correct.substr(0, 2));
    mi = stoi(correct.substr(3, 2));
    int y = (hr*60) + mi;
    int dis;
    if(x <= y) dis = y-x;
    else dis = (1440-x) + y;
    int ans = 0;
    if(dis >= 60) ans += dis/60, dis = dis%60;
    if(dis >= 15) ans += dis/15, dis = dis%15;
    if(dis >= 5) ans += dis/5, dis = dis%5;
    ans += dis;
    return ans;
}

int main()
{
    string current, correct;
    cin >> current >> correct;
    int ans = convertTime(current, correct);
    cout << ans << "\n";
}

/**
02:30
04:35

11:00
11:01
*/
