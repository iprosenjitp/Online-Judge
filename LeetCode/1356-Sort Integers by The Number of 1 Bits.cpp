#include <iostream>
#include <vector>

using namespace std;

vector<int> sortByBits(vector<int>& arr)
{
    vector<int> bitsCount;
    for(int i = 0; i < arr.size(); i++){
        bitsCount.push_back(__builtin_popcount(arr[i]));
    }

    for(int i = 0; i < arr.size()-1; i++){
        for(int j = i+1; j < arr.size(); j++){
            if(bitsCount[i] > bitsCount[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                int temp2 = bitsCount[i];
                bitsCount[i] = bitsCount[j];
                bitsCount[j] = temp2;
            }
            else if(bitsCount[i] == bitsCount[j]){
                if(arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;

//                    int temp2 = bitsCount[i];
//                    bitsCount[i] = bitsCount[j];
//                    bitsCount[j] = temp;
                }
            }
        }
//        cout << "[" << arr[0] << "[" << bitsCount[0] << "]" ;
//        for(int i = 1; i < arr.size(); i++){
//            cout << "," << arr[i] << "[" << bitsCount[i] << "]";
//        }
//        cout << "]" << "\n";
    }
    return arr;
}

int main()
{
    vector<int> nums;
    for(int i = 0; i < 9; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    vector<int> ans = sortByBits(nums);

    cout << "[" << ans[0];
    for(int i = 1; i < ans.size(); i++){
        cout << "," << ans[i];
    }
    cout << "]" << "\n";

    return 0;
}

