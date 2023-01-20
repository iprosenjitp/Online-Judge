#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;

    cin >> n;
    cin >> str;

    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == '0') cnt0++;
        else cnt1++;
    }

    if(cnt0 >= cnt1) cout << n - 2*cnt1 << "\n";
    else cout << n - 2*cnt0 << "\n";

    return 0;
}

