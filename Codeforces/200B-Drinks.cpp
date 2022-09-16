#include <iostream>

using namespace std;

int main()
{
    int n;
    double ni;
    double sum = 0.0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf", &ni);
        sum += ni;
    }

    double ans = sum / n;

    printf("%0.12lf\n", ans);

    return 0;
}
