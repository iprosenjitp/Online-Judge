#include<iostream>
using namespace std;
int main()
{
    int days, months, years;
    scanf("%d", &days);
    years = days / 365;
    days = days - (years * 365);

    months = days / 30;
    days = days - (months * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    return 0;
}
