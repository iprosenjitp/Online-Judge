#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n;
	cin >> n;
	cout << n-8-(n&1) << " " << 8+(n&1) << "\n";
}
