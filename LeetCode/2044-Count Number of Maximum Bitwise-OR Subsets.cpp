#include <bits/stdc++.h>

using namespace std;

int countMaxOrSubsets(vector<int>& nums)
{
    int maxOr = 0, cnt = 0;
    for(int i = 1; i < pow(2, nums.size()); i++){
        int orSum = 0;
        for(int j = nums.size(); j >= 0; j--){
            if(i & (1 << j)){
                orSum |= nums[j];
            }
        }
//        cout << orSum << "\n";
        if(orSum == maxOr) cnt++;
        else if(maxOr < orSum) {
            maxOr = orSum;
            cnt = 1;
        }
    }
    return cnt;
}

int main()
{
    vector<int> V;
    for(int i = 0; i < 4; i++){
        int n;
        cin >> n;
        V.push_back(n);
    }
    int ans = countMaxOrSubsets(V);
    cout << ans << "\n";
}

/*
3 2 1 5
99944 99666 99317 876 417 99320 99809 271 99975 686 99021 486 306 294 304 99803
*/
