#include <bits/stdc++.h>
#define ll long long

using namespace std;

int countBalls(int lowLimit, int highLimit)
{
    int arr[46] = {0};
    for(int i = lowLimit; i <= highLimit; i++){
        int x = i;
        int sum = 0;
        while(x){
            sum += x%10;
            x /= 10;
        }
        arr[sum]++;
    }
    int maxi = arr[0];
    for(int i = 1; i < 46; i++){
        if(arr[i] > maxi) maxi = arr[i];
    }
    return maxi;
}

int main()
{
    int lowLimit, highLimit;
    cin >> lowLimit >> highLimit;
    int ans = countBalls(lowLimit, highLimit);
    cout << ans << "\n";
}
