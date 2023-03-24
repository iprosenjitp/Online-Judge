#include <bits/stdc++.h>
#define ll long long

using namespace std;

int binarySearch(vector<int>& arr, int target)
{
    int left = 0, right = arr.size();
    while(left <= right){
        int mid = (left+right) / 2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) right = mid-1;
        else left = mid+1;
    }
    return -1;
}

bool checkIfExist(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        int target = arr[i]*2;
        int x = binarySearch(arr, target);
//        cout << target << " " << i << " " << x << "\n";
        if(x != -1 && x != i) return true;
    }
    return false;
}

int main()
{
    vector<int> arr;
    for(int i = 0; i < 8; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    bool ans = checkIfExist(arr);
    if(ans) cout << "true\n";
    else cout << "false\n";
}

/**
-10 12 -20 -8 15
10 5 -9 15 3 8 12 -10
*/
