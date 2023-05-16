#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    cin >> n;
    vector<int> V(n);
    for(int i = 0; i < n; i++) {
        cin >> V[i];
        if(V[i] == 1) cnt1++;
        else if(V[i] == 2) cnt2++;
        else cnt3++;
    }
    if(!cnt1 || !cnt2 || !cnt3) cout << "0\n";
    else{
        int w = min(cnt1, min(cnt2, cnt3));
        cout << w << "\n";
        for(int i = 0; i < w; i++){
            int flag1 = 1, flag2 = 1, flag3 = 1;
            for(int i = 0; i < n; i++){
                if(flag1 && V[i] == 1){
                    cout << i+1 << " ";
                    flag1 = 0;
                    V[i] = 0;
                }
                if(flag2 && V[i] == 2){
                    cout << i+1 << " ";
                    flag2 = 0;
                    V[i] = 0;
                }
                if(flag3 && V[i] == 3){
                    cout << i+1 << " ";
                    flag3 = 0;
                    V[i] = 0;
                }
            }
            cout << "\n";
        }
    }

}
