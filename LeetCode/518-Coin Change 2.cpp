#include <bits/stdc++.h>
#define MIN 10004
#define MAX 10000007

using namespace std;

int dp[302][10004];

int func(int ind, int amount, vector<int>& coins)
{
    if(amount == 0) return 1;
    if(ind < 0) return 0;
    if(dp[ind][amount] != -1) return dp[ind][amount];

    int ways = 0;
    for(int coin_amount = 0; coin_amount <= amount; coin_amount += coins[ind]) {
        ways += func(ind-1, amount-coin_amount, coins);
    }
    return dp[ind][amount] = ways;
}

int coinChange(vector<int>& coins, int amount)
{
    memset(dp, -1, sizeof dp);
    return func(coins.size()-1, amount, coins);
}


int main()
{
    vector <int> coins = {2};
    printf("%d\n", coinChange(coins, 3));
    return 0;
}

