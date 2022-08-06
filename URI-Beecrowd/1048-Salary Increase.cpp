#include<iostream>
using namespace std;
int main()
{
    double old_salary, new_salary, increase;
    int rate;
    scanf("%lf", &old_salary);
    if(old_salary >= 0.0){
        if(old_salary <= 400.00){
            rate = 15;
            new_salary = old_salary + (old_salary * (1.0 * rate / 100.0));
            increase = new_salary - old_salary;
        }

        else if(old_salary <= 800.00){
            rate = 12;
            new_salary = old_salary + (old_salary * (1.0 * rate / 100.0));
            increase = new_salary - old_salary;
        }

        else if(old_salary <= 1200.00){
            rate = 10;
            new_salary = old_salary + (old_salary * (1.0 * rate / 100.0));
            increase = new_salary - old_salary;
        }

        else if(old_salary <= 2000.00){
            rate = 7;
            new_salary = old_salary + (old_salary * (1.0 * rate / 100.0));
            increase = new_salary - old_salary;
        }

        else{
            rate = 4;
            new_salary = old_salary + (old_salary * (1.0 * rate / 100.0));
            increase = new_salary - old_salary;
        }
    }

    printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: %d %\n", new_salary, increase, rate);
    return 0;
}
