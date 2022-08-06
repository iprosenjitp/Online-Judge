#include<iostream>
using namespace std;
int main()
{
    double sum = 1, j = 1.00;
    for(int i = 3; i <= 39; i++){
        if(i%2 == 1){
            j *= 2.00;
            sum += (1.0*i) / j;
        }
    }
    printf("%0.2lf\n", sum);
    return 0;
}
