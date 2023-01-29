#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int maxTime = 1440;
        int n, h, m;
        cin >> n >> h >> m;
        int sleepTime = h*60 + m;
        for(int i = 0; i < n; i++){
            int hi, mi, alarmTime, duration;
            cin >> hi >> mi;
            alarmTime = hi*60 + mi;
            if(sleepTime <= alarmTime) duration = alarmTime - sleepTime;
            else duration = (1440 - sleepTime) + alarmTime;
            if(maxTime > duration) maxTime = duration;
        }
        cout << maxTime/60 << " " << maxTime%60 << "\n";
    }
}
