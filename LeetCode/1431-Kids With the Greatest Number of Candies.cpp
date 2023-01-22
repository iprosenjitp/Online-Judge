#include <iostream>
#include <vector>

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
{
    int maxi = 0;
    for(int i = 0; i < candies.size(); i++){
        if(candies[i] > maxi) maxi = candies[i];
    }
    vector<bool> ans;
    for(int i = 0; i < candies.size(); i++){
        if(candies[i] + extraCandies >= maxi) ans.push_back(true);
        else ans.push_back(false);
    }
    return ans;
}

int main()
{
    vector<int> candies;
    for(int i = 0; i < 5; i++){
        int n;
        cin >> n;
        candies.push_back(n);
    }
    int extraCandies;
    cin >> extraCandies;
    vector<bool> ans = kidsWithCandies(candies, extraCandies);
    for(int i = 0; i < ans.size(); i++){
        cout << (ans[i] ? "true" : "false") << " ";
    }
    cout << "\n";

    return 0;
}

