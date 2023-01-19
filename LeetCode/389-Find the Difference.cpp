#include <iostream>
#include <cstring>

using namespace std;

//char findTheDifference(string s, string t)
//{
//    int A[26], B[26], flag;
//    memset(A, 0, sizeof(A));
//    memset(B, 0, sizeof(B));
//    for(int i = 0; i < s.length(); i++) A[s[i] - 'a']++;
//    for(int i = 0; i < t.length(); i++) B[t[i] - 'a']++;
//    for(int i = 0; i < 26; i++){
//        if(A[i] != B[i]){
//            flag = i;
//            break;
//        }
//    }
//    char ans = 'a' + flag;
//    return ans;
//}

char findTheDifference(string s, string t)
{
    s += t;
    int xorSum = 0;
    for(int i = 0; i < s.length(); i++)xorSum ^= s[i];
    return xorSum;
}

int main()
{
    string s, t;
    cin >> s >> t;
    char ans = findTheDifference(s, t);
    cout << ans << "\n";

    return 0;
}

