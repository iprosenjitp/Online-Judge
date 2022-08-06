#include<iostream>
using namespace std;
int main()
{
    int time, speed, dis;
    double fuel;
    scanf("%d %d", &time, &speed);
    dis = time * speed;
    fuel = dis / 12.0;

    printf("%0.3lf\n", fuel);

    return 0;
}
