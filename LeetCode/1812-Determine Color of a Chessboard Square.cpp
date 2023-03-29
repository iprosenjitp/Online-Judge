#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool squareIsWhite(string coordinates)
{
    int x = coordinates[0] - 'a';
    int y = coordinates[1] - '1';
    if(x%2 == y%2) return false;
    return true;
}

int main()
{
    string coordinates;
    cin >> coordinates;
    if(squareIsWhite(coordinates)) cout << "true\n";
    else cout << "false\n";
}
