#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//void print()
//{
//    for(int i = 0; i < V.size(); i++){
//        cout << i << ":";
//        for(int j = 0; j < V[i].size(); j++){
//            cout << V[i][j] << " ";
//        }
//        cout << endl;
//    }
//}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>>V(n);

    for(int i = 0; i < n; i++){
        V[i].push_back(i);
    }
    string command, place;
    int a, b;
    while(cin >> command){
        if(command == "quit") break;
        cin >> a >> place >> b;
        if(a == b) continue;
        int aRow, aCol, bRow, bCol;
        bool aPosi = false, bPosi = false;
        for(int i = 0; i < V.size(); i++){
            for(int j = 0; j < V[i].size(); j++){
                if(aPosi == false) {
                    if(V[i][j] == a){
                        aRow = i;
                        aCol = j;
                        aPosi = true;
                    }
                }
                if(bPosi == false) {
                    if(V[i][j] == b){
                        bRow = i;
                        bCol = j;
                        bPosi = true;
                    }
                }
            }
        }

        printf("Position A = [%d][%d]\n", aRow, aCol);
        printf("Position B = [%d][%d]\n", bRow, bCol);

        vector<int> temp;
        if(command == "move"){
            if(place == "onto"){
                if(aRow == bRow){
                    int start, end;
                    else if(aCol < bCol) {
                        start = aCol;
                        end = bCol;
                    }
                    else {
                        start = bCol;
                        end = aCol;
                    }
                    for(int i = start; i <= end; i++){
                        temp.push_back(V[bRow][i]);
                    }
                    for(int i = bCol+1; V[bRow][i] != a; i++){
                        V[bRow][i] = V[bRow][i+1];
                    }
                    V[bRow][bCol+1] = a;
                }
                else {
                    for(int i = bCol+1; i < V[bRow].size(); i++){
                        temp.push_back(V[bRow][i]);
                    }
                    V[bRow].push_back(a);
                    V[bRow][bCol+1] = a;
                    for(int i = bCol+2, j = 0; j < temp.size(); i++, j++){
                        V[bRow][i] = temp[j];
                    }
                }
                temp.clear();
            }
            else{
                V[bRow].push_back(a);
            }

            for(int i = aCol; i < V[aRow].size() - 1; i++){
                V[aRow][i] = V[aRow][i+1];
            }
            V[aRow].pop_back();
        }


        for(int i = 0; i < V.size(); i++){
            cout << i << ":";
            for(int j = 0; j < V[i].size(); j++){
                cout << " " << V[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}

