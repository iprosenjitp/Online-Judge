#include <bits/stdc++.h>
#define MIN 10004
#define MAX 10000007

using namespace std;

int dp[MIN];

int func(int amount, vector <int> & coins)
{
    if(amount == 0) return 0;
    if(dp[amount] != -1) return dp[amount];

    int ans = INT_MAX;
    for(int i : coins) {
        if(amount >= i)
            ans = min(ans + 0LL, func(amount - i, coins) + 1LL);
    }
    return dp[amount] = ans;
}

int coinChange(vector<int>& coins, int amount)
{
    memset(dp, -1, sizeof dp);
    int ans = func(amount, coins);

    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    vector <int> coins = {1};
    printf("%d\n", coinChange(coins, 0));
    return 0;
}
