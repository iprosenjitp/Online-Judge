#include <bits/stdc++.h>
#define ll long long

using namespace std;

int maxProfit(vector<int>& prices)
{
    int n = prices.size();
    int minVal = prices[0];
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(minVal > prices[i]) minVal = prices[i];
        ans = max(ans, (prices[i]-minVal));
    }
    return ans;
}

int main()
{
    vector<int> prices(6);
    for(int i = 0; i < prices.size(); i++) cin >> prices[i];
    int ans = maxProfit(prices);
    cout << ans << "\n";
}

/**
7 1 5 3 6 4
*/
