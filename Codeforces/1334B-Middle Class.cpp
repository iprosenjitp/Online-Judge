#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        double x;
        cin >> n >> x;
        vector<double> V(n);
        for(int i = 0; i < n; i++) cin >> V[i];
        sort(V.rbegin(), V.rend());
//        for(int i = 0; i < n; i++) cout << V[i] << " ";
//        cout << "\n";
        double sum = 0.0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            sum += V[i];
            if((sum/(i+1)*1.0) >= x) cnt++;
        }
        cout << cnt << "\n";
    }
}
