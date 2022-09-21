#include <iostream>
#include <vector>

using namespace std;

vector<int> decode (vector<int> encoded, int first)
{
    vector<int> original;
    original.push_back(first);

    for(int i = 0; i < encoded.size(); i++){
        original.push_back(original[i] ^ encoded[i]);
    }

    return original;
}

int main()
{
    vector<int> encoded;
    int x, n, first;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        encoded.push_back(x);
    }

    scanf("%d", &first);

    vector<int> original = decode(encoded , first);

    for(int i = 0; i < original.size(); i++){
        printf("%d ", original[i]);
    }
    printf("\n");

    return 0;
}

