#include <iostream>

using namespace std;

int hammingDistance(int x, int y)
{
    int ans = 0;
    for(int i = 31; i >= 0; i--){
        if((x & (1 << i)) != ((y & (1 << i)))) ans++;
    }
    return ans;
}

int main()
{
    int x, y;
    cin >> x >> y;
    int ans = hammingDistance(x, y);
    cout << ans << "\n";

    return 0;
}

