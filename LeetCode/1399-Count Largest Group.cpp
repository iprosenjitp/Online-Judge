#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countLargestGroup(int n)
{
    vector<int> V(75, 0);
    for(int i = 1; i <= n; i++){
        int num = i;
        int digitSum = 0;
        while(num){
            digitSum += num%10;
            num /= 10;
        }
        V[digitSum]++;
    }
    sort(V.rbegin(), V.rend());
//    for(int i = 0; i < V.size(); i++) cout << V[i] << " ";
//    cout << "\n";
    int x = V[0], ans = 1;
    for(int i = 1; i < V.size(); i++){
        if(V[i] == x) ans++;
        else break;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = countLargestGroup(n);
    cout << ans << "\n";
}
