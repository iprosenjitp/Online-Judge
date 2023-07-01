#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<int> minOperations(string boxes)
{
    int n = boxes.size();
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++)
            if(boxes[j] == '1') sum += abs(i-j);
        ans[i] = sum;
    }
    return ans;
}

int main()
{
    string boxes;
    cin >> boxes;
    vector<int> ans = minOperations(boxes);
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    cout << "\n";
}
