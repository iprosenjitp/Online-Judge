#include <iostream>

using namespace std;

bool hasAlternatingBits(int n)
{
    int flag;
    for(int i = 31; i >= 0; i--){
        if(n & (1 << i)){
            flag = i;
            break;
        }
    }
    for(int i = flag; i > 0; i--){
        int a = (n & (1 << i)) ? 1 : 0;
        int b = (n & (1 << i-1)) ? 1 : 0;
        if(a == b) return false;
    }
    return true;
}

int main()
{
    int num;
    cin >> num;
    bool ans = hasAlternatingBits(num);
    if(ans) cout << "true";
    else cout << "false";
    cout << "\n";
    return 0;
}

