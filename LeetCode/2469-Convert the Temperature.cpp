#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<double> convertTemperature(double celsius)
{
    vector<double> ans;
    ans.push_back(celsius+273.15);
    ans.push_back(celsius*1.80 + 32.00);
    return ans;
}

int main()
{
    double celsius;
    cin >> celsius;
    vector<double> ans = convertTemperature(celsius);
    cout << ans[0] << " " << ans[1] << "\n";
}
