#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int r1, r2, b;
        cin >> r1 >> r2 >> b;
        double crr = (r2*6.0 / (300 - b) * 1.0);
        printf("%0.2lf ", crr);
        if(r1-r2 < 0)
        {
            printf("%0.2lf\n", 0.0);
            continue;
        }
        double rrr = ((r1 - r2 + 1) * 6.0 / b * 1.0);
        printf("%0.2lf\n", rrr);
    }
}
