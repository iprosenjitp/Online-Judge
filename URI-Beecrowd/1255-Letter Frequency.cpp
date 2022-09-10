#include <iostream>

using namespace std;

int main()
{
    string str;
    int t;
    int A[30];
    char ch;

    scanf("%d", &t);
    scanf("%c", &ch);

    while(t--){
        getline(cin, str);

        for(int i = 0; i < 30; i++) A[i] = 0;

        for(int i = 0; str[i] != '\0'; i++){
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
//                printf("%c ", str[i]);
                if(str[i] >= 'A' && str[i] <= 'Z'){
//                    printf("%c ", str[i]);
                    str[i] = 'a' + (str[i] - 'A');
                }
//                printf("%c ", str[i]);
                int digit = str[i] - 'a';
//                printf("%d ", digit);
                A[digit]++;
            }
        }

//        for(int i = 0; i < 30; i++) printf("%d ", A[i]);

        int big = A[0];
        for(int i = 1; i < 30; i++){
            if(A[i] > big) big = A[i];
        }

//        printf("%d\n", big);

        for(int i = 0; i < 30; i++){
            if(A[i] == big){
                printf("%c", 'a'+ i);
            }
        }
        printf("\n");
    }

    return 0;
}

