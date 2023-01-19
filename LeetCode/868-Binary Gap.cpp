#include <iostream>

using namespace std;

int binaryGap(int n)
{
    int flag, diff = 0;
    if(__builtin_popcount(n) < 2) return 0;

    for(int i = 31; i >= 0; i--){
        if(n & (1 << i)){
            flag = i;
            break;
        }
    }
//    cout << flag << "\n";
    for(int i = flag-1; i >= 0; i--){
        if(n & (1 << i)){
            if((flag-i) > diff){
                diff = flag-i;
            }
            flag = i;
//            cout << "i = " << i << " " << "diff = " << diff << " " << "flag = " << flag << "\n";
        }
    }
    return diff;
}

int main()
{
    int num;
    cin >> num;
    int ans = binaryGap(num);
    cout << ans << "\n";

    return 0;
}

