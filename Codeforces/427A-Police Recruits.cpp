#include <iostream>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int police = 0;
    int untreatedCrime = 0;
    int ni;

    for(int i = 0; i < n; i++){
        scanf("%d", &ni);

        if(ni > 0){
            police += ni;
        }
        else{
            if(!police) untreatedCrime++;
            else police--;
        }
    }

    printf("%d\n", untreatedCrime);

    return 0;
}

