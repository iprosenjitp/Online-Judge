#include<iostream>
using namespace std;
int main()
{
    double sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += (1.00 / (1.0*i));
    }
    printf("%0.2lf\n", sum);
    return 0;
}
