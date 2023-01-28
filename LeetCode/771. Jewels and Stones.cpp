#include <bits/stdc++.h>

using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    int cnt = 0;
    for(int i = 0; i < jewels.length(); i++){
        for(int j = 0; j < stones.length(); j++){
            if(jewels[i] == stones[j]) cnt++;
        }
    }
    return cnt;
}

int main()
{
    string jewels, stones;
    cin >> jewels >> stones;
    int ans = numJewelsInStones(jewels, stones);
    cout << ans << "\n";
}
