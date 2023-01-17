#include <iostream>
#include <string>

using namespace std;

string reverseString(string str)
{
    int len = str.length();
    for(int i = 0, j = len-1; i < len/2 ; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

string addBinary(string a, string b)
{
    string ans;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    while(i >= 0 || j >= 0){
        int sum = carry;
        if(i >= 0) sum += a[i--] - '0';
        if(j >= 0) sum += b[j--] - '0';
        carry = (sum > 1) ? 1 : 0;
        ans += to_string(sum%2);
    }
    if(carry) ans += to_string(carry);
    return reverseString(ans);
}

int main()
{
    string a, b;
    cin >> a >> b;
    string ans = addBinary(a, b);
    cout << ans << "\n";

    return 0;
}

