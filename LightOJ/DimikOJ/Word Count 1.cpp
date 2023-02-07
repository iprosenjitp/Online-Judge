#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--){
        string S;
        int cnt = 0;
        getline(cin, S);
        for(int i = 0; i < S.length(); i++)
            if(S[i] == ' ') cnt++;
        cout << "Count = " << cnt+1 << "\n";
    }
}
