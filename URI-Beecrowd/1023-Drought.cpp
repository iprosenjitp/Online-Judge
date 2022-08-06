#include<iostream>
using namespace std;

int main()
{
    int n, x, y, city_count = 0, x_sum, y_sum, helper_a;
    double consump_person;
    int A[100006], B[100006];

    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        if(city_count != 0) printf("\n");
        x_sum = y_sum = 0;

        for(int i = 0; i < n; i++){
            scanf("%d %d", &x, &y);
            x_sum += x;
            y_sum += y;

            helper_a = y/x;

            for(int j = 0; j < i; j++){
                if(B[j] == helper_a){
                    A[j] += x;
                    continue;
                }
            }

            A[i] = x;
            B[i] = helper_a;
        }

        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(B[i] > B[j]){
                    swap(B[i], B[j]);
                    swap(A[i], A[j]);
                }
            }
        }

        consump_person = (1.00 * y_sum) / (1.0 * x_sum);

        city_count++;
        printf("Cidade# %d:\n", city_count);
        for(int i = 0; i < n; i++){
            if(i > 0 && B[i] == B[i-1]) continue;
            printf("%d-%d ", A[i], B[i]);
        }
        printf("\n");
        printf("Consumo medio: %0.2lf m3.\n", consump_person);
    }

    return 0;
}
