#include <iostream>

using namespace std;

int main()
{
    char name[31];

    for(int i = 1; i <= 10; i++){
        scanf("%s", name);
        if(i == 3 || i == 7 || i == 9) printf("%s\n", name);
    }

    return 0;
}

