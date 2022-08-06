#include<iostream>
using namespace std;
int main()
{
    int age, sum = 0, count = 0;
    double avg;
    while(1){
        scanf("%d", &age);
        if(age < 0){
            printf("%0.2lf\n", avg);
            break;
        }

        sum += age;
        count++;
        avg = (1.00*sum) / (1.00*count);
    }
    return 0;
}
