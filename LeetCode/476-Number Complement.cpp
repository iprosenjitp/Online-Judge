#include <iostream>

using namespace std;

int findComplement(int num)
{
    int flag;
    for(int i = 31; i >= 0; i--){
        if(num & (1 << i)){
            flag = i;
            break;
        }
    }
    for(int i = flag; i >= 0; i--){
        num ^= (1 << i);
    }
    return num;
}

int main()
{
    int num;
    cin >> num;
    int ans = findComplement(num);
    cout << ans << "\n";

    return 0;
}

