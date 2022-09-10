#include <iostream>

using namespace std;

int main()
{
    string str;
    char ch;

//    char bigWord[102];
//    int bigWordLength = 0;
//    int bigWordLastIndex;

    while(1){
        int A[102];

        getline(cin, str);
//        scanf("%c", &ch);
        if(str == "0") break;

        int len = 0;

        for(int i = 0; str[i] != '\0'; i++) len++;

        int wordLength = 0;
        int indexA = 0;
        int spaceCount = 0;


        for(int i = 0; i < len; i++){
            if(str[i] != ' ') wordLength++;

            if(str[i] == ' ' || i == len-1){
                spaceCount++;
                A[indexA] = wordLength;
                indexA++;
//                if(wordLength > bigWordLength){
//                    bigWordLength = wordLength;
//                    bigWordLastIndex = i;
//
//                    for(int j = bigWordLastIndex-bigWordLength, k = 0; j < bigWordLastIndex; i++, k++){
//                        bigWord[k] = str[j];
//                    }
//                }
                wordLength = 0;
                continue;
            }
//            wordLength++;
        }
//        printf("%d\n", spaceCount);
//        for(int i = 0; i < spaceCount; i++) printf("%d ", A[i]);
//        printf("\n");

        printf("%d", A[0]);
        for(int i = 1; i < spaceCount; i++){
            printf("-%d", A[i]);
        }
        printf("\n");
    }

//    printf("The biggest word: ");
//    for(int i = 0; bigWord[i] != '\0'; i++){
//        printf("%c", bigWord[i]);
//    }
//    printf("\n");

    return 0;
}

