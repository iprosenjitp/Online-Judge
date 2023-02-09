#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, A[1003], cnt = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
            if(A[i] == 2) cnt++;
        }
//        if(!cnt) cout << "1\n";
        if(cnt%2) cout << "-1\n";
        else{
            int flag = cnt/2;
            cnt = 0;
            for(int i = 0; i < n; i++){
                if(A[i] == 2) cnt++;
                if(cnt == flag){
                    cout << i+1 << "\n";
                    break;
                }
            }
        }
    }
}

