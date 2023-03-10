#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int n, A[] = {6, 8, 4, 2};
	cin >> n;
	if(n == 0) cout << 1;
	else cout << A[n%4];
}
