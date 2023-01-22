#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        int A[102];
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        int cnt = 0;
        for(int i = 0; i < n-1; i++){
            if(A[i]%2 == A[i+1]%2){
                A[i+1] = A[i]*A[i+1];
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}

