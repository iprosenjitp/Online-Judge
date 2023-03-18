#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *createNode(int data, ListNode *next)
{
    ListNode *newNode = (ListNode*)malloc(sizeof(ListNode));
    if(newNode == NULL){
        cout << "ERROR! Could not create a new node\n";
        exit(1);
    }
    newNode->val = data;
    newNode->next = next;
    return newNode;
}

void printLinkedList(ListNode *head)
{
    if(head == NULL) {
        cout << "Linked List is empty\n";
        return;
    }
    ListNode *currentNode = head;
    while(currentNode != NULL){
        cout << currentNode->val << " ";
        currentNode = currentNode->next;
    }
    cout << "\n";
}

int getDecimalValue(ListNode* head)
{
    vector<int> digits;
    int decimal = 0;
    ListNode *currentNode = head;
    while(currentNode != NULL){
        digits.push_back(currentNode->val);
        currentNode = currentNode->next;
    }
    for(int i = 0; i < digits.size(); i++) cout << digits[i] << " ";
    cout << "\n";
    for(int i = digits.size()-1, j = 0; i >= 0; i--, j++){
        if(digits[i]) decimal += pow(2, j);
    }
    return decimal;
}

int main()
{
    ListNode *head, *newNode, *temp;
    head = NULL;
    int data;
    for(int i = 0; i < 15; i++){
        cin >> data;
        newNode = createNode(data, NULL);
        if(head == NULL) head = newNode;
        else temp->next = newNode;
        temp = newNode;
    }
//    printLinkedList(head);
    int ans = getDecimalValue(head);
    cout << ans << "\n";
}

/**
1 0 1
1 0 0 1 0 0 1 1 1 0 0 0 0 0 0
*/
