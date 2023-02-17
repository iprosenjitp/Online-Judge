#include <bits/stdc++.h>
#define ll long long

using namespace std;

int checkBeauty(string str, int len)
{
    for(int i = 0; i < len-1; i++)
        if(str[i] == str[i+1]) return i;
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, i;
        cin >> n >> m;
        string strN, strM;
        cin >> strN >> strM;
        int flagN = checkBeauty(strN, n);
        if(flagN != -1){
            for(int j = n-1; j > flagN; j--) strM += strN[j];
            int flagM = checkBeauty(strM, strM.length());
            if(flagM != -1) cout << "NO\n";
            else cout << "YES\n";
            continue;
        }
        int flagM = checkBeauty(strM, m);
        if(flagM != -1){
            for(int j = m-1; j > flagM; j--) strN += strM[j];
            int flagN = checkBeauty(strN, strN.length());
            if(flagN != -1) cout << "NO\n";
            else cout << "YES\n";
            continue;
        }
        cout << "YES\n";
    }
}
