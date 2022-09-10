#include <iostream>

using namespace std;

int main()
{
    string str;
    int cnt = 0, sum = 0;

    while(1){
        getline(cin, str);
        if(str == "caw caw"){
            printf("%d\n", sum);
            sum = 0;
            cnt++;
            if(cnt == 3) return 0;
        }
        if(str[0] == '*'){
            sum += 4;
        }
        if(str[1] == '*'){
            sum += 2;
        }
        if(str[0] == '*'){
            sum += 1;
        }
    }

    return 0;
}

