#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a1, a2, a3, a4;
        int A, B, cnt;
        cin >> a1 >> a2 >> a3 >> a4;
        cnt = A = B = a1;
        a1 = 0;
        int flag;
        if(a2 > a3) flag = 2;
        else if(a2 < a3) flag = 3;
        while(){
            if(flag = 2){
                if(cnt <= a2){
                    a2 -= cnt;
                }
                else{
                    a2 = 0;
                }
                cnt += cnt;
            }
            else if(a2 < a3){

            }
        }
    }
}
