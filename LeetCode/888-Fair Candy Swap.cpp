#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes)
{
    vector<int> ans;
    int sumA = 0, sumB = 0;
    for(int i = 0; i < aliceSizes.size(); i++) sumA += aliceSizes[i];
    for(int i = 0; i < bobSizes.size(); i++) sumB += bobSizes[i];
    int need = (sumA+sumB)/2;
    if(need > sumA){
        sort(bobSizes.begin(), bobSizes.end());
        for(int i = 0; i < aliceSizes.size(); i++){
            int target = need - (sumA-aliceSizes[i]);
            if(binary_search(bobSizes.begin(), bobSizes.end(), target))
                return {aliceSizes[i], target};
        }
    }
    else{
        sort(aliceSizes.begin(), aliceSizes.end());
        for(int i = 0; i < bobSizes.size(); i++){
            int target = need - (sumB-bobSizes[i]);
            if(binary_search(aliceSizes.begin(), aliceSizes.end(), target))
                return {target, bobSizes[i]};
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> aliceSizes, bobSizes;
    for(int i = 0; i < 1; i++){
        int n;
        cin >> n;
        aliceSizes.push_back(n);
    }
    for(int i = 0; i < 2; i++){
        int n;
        cin >> n;
        bobSizes.push_back(n);
    }
    vector<int> ans = fairCandySwap(aliceSizes, bobSizes);
    cout << ans[0] << " " << ans[1] << "\n";
}
