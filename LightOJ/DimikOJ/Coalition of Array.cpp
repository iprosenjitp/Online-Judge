#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        vector<int> V;
        cin >> n1;
        for(int i = 0; i < n1; i++) {
            int num;
            cin >> num;
            V.push_back(num);
        }
        cin >> n2;
        for(int i = 0; i < n2; i++) {
            int num;
            cin >> num;
            V.push_back(num);
        }
        sort(V.begin(), V.end());
        for(int i = 0; i < V.size(); i++) cout << V[i] << " ";
        cout << "\n";
    }
}
