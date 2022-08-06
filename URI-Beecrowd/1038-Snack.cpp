#include<iostream>
using namespace std;
int main()
{
    int x, y;
    double price;
    scanf("%d %d", &x, &y);

    if(x == 1){
        price = 4.00;
    }

    else if(x == 2){
        price = 4.50;
    }

    else if(x == 3){
        price = 5.00;
    }

    else if(x == 4){
        price = 2.00;
    }

    else{
        price = 1.50;
    }

    printf("Total: R$ %0.2lf\n", y * price);
    return 0;
}
