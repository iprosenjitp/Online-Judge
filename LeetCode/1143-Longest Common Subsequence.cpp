#include <bits/stdc++.h>
#define MIN 1003
#define MAX 10000007

using namespace std;

int dp[1003][1003];

int lcs(int i, int j, string &s1, string &s2)
{
    if(i < 0 || j < 0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    int ans = lcs(i-1, j, s1, s2);
    ans = max(ans, lcs(i, j-1, s1, s2));
    ans = max(ans, lcs(i-1, j-1, s1, s2) + (s1[i] == s2[j]));

    return dp[i][j] = ans;
}

int longestCommonSubsequence(string text1, string text2) {
    memset(dp, -1, sizeof dp);
    return lcs(text1.size()-1, text2.size()-1, text1, text2);
}

int main()
{
    string text1 = "abcde", text2 = "ace";
    printf("%d\n", longestCommonSubsequence(text1, text2));
    return 0;
}
