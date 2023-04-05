#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        double s = (a + b + c)*1.0/2.0;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << fixed << setprecision(3) << "Area = " << area << "\n";
    }
}
