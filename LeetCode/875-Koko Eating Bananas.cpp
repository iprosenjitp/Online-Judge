#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minEatingSpeed(vector<int>& piles, int h)
{
    sort(piles.begin(), piles.end());
    int len = piles.size();
    int left = 1, right = piles[len-1];
    while(left < right){
        int mid = (left+right) / 2;
        int needH = 0;
        for(int i = 0; i < piles.size(); i++)
            needH += ceil(piles[i]*1.0 / mid);
        if(needH <= h) right = mid;
        else left = mid+1;
    }
    return left;
}

int main()
{
    vector<int> piles;
    int h;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        piles.push_back(n);
    }
    cin >> h;
    int ans = minEatingSpeed(piles, h);
    cout << ans << "\n";
}

/**
3 6 7 11
8

30 11 23 4 20
5
*/
