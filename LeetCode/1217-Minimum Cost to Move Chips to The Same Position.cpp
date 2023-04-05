#include <bits/stdc++.h>
#define ll long long

using namespace std;

int minCostToMoveChips(vector<int>& position)
{
    int ans = INT_MAX;
    for(int i = 0; i < position.size(); i++){
        int cost = 0;
        for(int j = 0; j < position.size(); j++){
            if(position[i]%2 != position[j]%2) cost++;
        }
        if(cost < ans) ans = cost;
    }
    return ans;
}

int main()
{
    vector<int> position;
    int n;
    for(int i = 0; i < 3; i++){
        cin >> n;
        position.push_back(n);
    }
    int ans = minCostToMoveChips(position);
    cout << ans << "\n";
}

/**
1 2 3
2 2 2 3 3
1 1000000000
*/
