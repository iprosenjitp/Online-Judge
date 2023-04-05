#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum = a+b;
    string strA = to_string(a);
    string strB = to_string(b);
    string strSum = to_string(sum);
    string tempA = "", tempB = "", tempSum = "";
    for(int i = 0; i < strA.size(); i++){
        if(strA[i] == '0') continue;
        tempA += strA[i];
    }
    for(int i = 0; i < strB.size(); i++){
        if(strB[i] == '0') continue;
        tempB += strB[i];
    }
    for(int i = 0; i < strSum.size(); i++){
        if(strSum[i] == '0') continue;
        tempSum += strSum[i];
    }
//    cout << tempA << " " << tempB << "\n";
    a = stoi(tempA);
    b = stoi(tempB);
    sum = a+b;
    strSum = to_string(sum);
    if(strSum == tempSum) cout << "YES\n";
    else cout << "NO\n";
}
