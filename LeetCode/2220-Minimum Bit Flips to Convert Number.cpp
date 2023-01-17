#include <iostream>

using namespace std;

int minBitFlips(int start, int goal)
{
    int cnt = 0;
    for(int i = 31; i >= 0; i--){
//        int a = (start & 1<<i) ? 1 : 0;
//        int b = (goal & 1<<i) ? 1 : 0;
//        cout << a << " " << b << "\n";
//        if(a != b) cnt++;
        if((start & (1 << i)) != (goal & (1 << i))) cnt++;
    }
    return cnt;
}

int main()
{
    int start, goal;
    cin >> start >> goal;
    int ans = minBitFlips(start, goal);
    cout << ans << "\n";

    return 0;
}

