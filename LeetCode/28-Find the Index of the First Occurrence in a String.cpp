#include <bits/stdc++.h>
#define ll long long

using namespace std;

int strStr(string haystack, string needle)
{
    int ans = haystack.find(needle);
    return ans;
}

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;
    int ans = strStr(haystack, needle);
    cout << ans << "\n";
}

/**
sadbutsad sad

leetcode leeto
*/
