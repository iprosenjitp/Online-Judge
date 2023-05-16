#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countWords(vector<string>& words1, vector<string>& words2)
{
    multiset<string> S1, S2;
    for(int i = 0; i < words1.size(); i++) S1.insert(words1[i]);
    for(int i = 0; i < words2.size(); i++) S2.insert(words2[i]);
    int cnt = 0;
    for(int i = 0; i < words1.size(); i++)
        if(S1.count(words1[i]) == 1 && S2.count(words1[i]) == 1) cnt++;
    return cnt;
}

int main()
{
    vector<string> words1(5), words2(3);
    for(int i = 0; i < words1.size(); i++) cin >> words1[i];
    for(int i = 0; i < words2.size(); i++) cin >> words2[i];
    int ans = countWords(words1, words2);
    cout <<  ans << "\n";
}

/**
leetcode is amazing as is
amazing leetcode is
*/
