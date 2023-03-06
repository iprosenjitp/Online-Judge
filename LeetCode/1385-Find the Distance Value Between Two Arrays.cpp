#include <bits/stdc++.h>
#define ll long long

using namespace std;

//int upperBound(vector<int>& arr, int target)
//{
//    int left = 0, right = arr.size();
//    while(left < right){
//        int mid = (left+right) / 2;
//        if(arr[mid] > target) right = mid;
//        else left = mid+1;
//    }
//    return left;
//}

int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
{
    int ans = 0;
    for(int i = 0; i < arr1.size(); i++){
        int cnt = 0;
        for(int j = 0; j < arr2.size(); j++){
            int x = abs(arr1[i]-arr2[j]);
            if(x <= d) {
                cnt++;
                break;
            }
        }
        if(!cnt) ans++;
    }
    return ans;
}

int main()
{
    vector<int> arr1,  arr2;
    int d;
    for(int i = 0; i < 3; i++){
        int n;
        cin >> n;
        arr1.push_back(n);
    }
    for(int i = 0; i < 4; i++){
        int n;
        cin >> n;
        arr2.push_back(n);
    }
    cin >> d;
    int ans = findTheDistanceValue(arr1, arr2, d);
    cout << ans << "\n";
}

/**
4 5 8
10 9 1 8
2

1 4 2 3
-4 -3 6 10 20 30
3
*/
