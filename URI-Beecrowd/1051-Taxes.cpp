#include<iostream>
using namespace std;

int main()
{
    double salary, a, tax;
    scanf("%lf", &salary);

    if (salary <= 2000.00){
        tax = 0.00;
    }

    else if (salary <= 3000.00){
        salary = salary - 2000.00;
        a = salary * 0.08;
        tax = a;
    }

    else if (salary <= 4500){
        salary = salary - 3000.00;
        a = salary * 0.18;
        tax = 1000*0.08 + a;
    }

    else{
        salary = salary - 4500.00;
        a = salary * 0.28;
        tax = 1000*0.08 + 1500*0.18 + a;
    }

    if(tax == 0.00){
        printf("Isento\n");
    }
    else{
        printf("R$ %0.2lf\n", tax);
    }
    return 0;
}
