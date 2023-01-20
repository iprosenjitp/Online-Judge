#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int A[13], sum = 0;
    for(int i = 0; i < 12; i++){
        cin >> A[i];
        sum += A[i];
    }

    if(k == 0) cout << "0\n";
    else if(sum < k) cout << "-1\n";
    else{
        sum = 0;
        sort(A, A+12);
        for(int i = 11; i >= 0; i--){
            sum += A[i];
            if(sum >= k) {
                cout << 12-i << '\n';
                break;
            }
        }
    }

    return 0;
}

