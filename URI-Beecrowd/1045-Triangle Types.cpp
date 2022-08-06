#include<iostream>
using namespace std;
int main()
{
    double a, b, c, mini, mid, maxi;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a < b && a < c){
        mini = a;
        if(b < c){
            mid = b;
            maxi = c;
        }
        else{
            mid = c;
            maxi = b;
        }
    }
    else{
        if(b < c){
            mini = b;
            if(a < c){
                mid = a;
                maxi = c;
            }
            else{
                mid = c;
                maxi = a;
            }
        }
        else{
            mini = c;
            if(a < b){
                mid = a;
                maxi = b;
            }
            else{
                mid = b;
                maxi = a;
            }
        }
    }

    a = maxi;
    b = mid;
    c = mini;

    if (a >= (b + c)) {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if ((a*a) == ((b*b) + (c*c))) {
        printf("TRIANGULO RETANGULO\n");
    }

    else if ((a*a) > ((b*b) + (c*c))) {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if ((a*a) < ((b*b) + (c*c))) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && b == c) {
        printf("TRIANGULO EQUILATERO\n");
    }

    if ((a == b && b != c) || (b == c && c != a) || (a == c && a != b)) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

