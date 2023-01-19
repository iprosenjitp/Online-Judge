#include <iostream>

using namespace std;

string toHex(int num)
{
    if(num == 0) return "0";
    unsigned int x = num;
    string ans;
    char A[17] = "0123456789abcdef";
    while(x){
        ans += A[x%16];
        x /= 16;
    }
    for(int i = 0, j = ans.length()-1; i < ans.length()/2; i++, j--){
        char temp = ans[i];
        ans[i] = ans[j];
        ans[j] = temp;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;
    string ans = toHex(num);
    for(int i = 0; i < ans.length(); i++){
        cout << ans[i] ;
    }
    cout << "\n";

    return 0;
}

