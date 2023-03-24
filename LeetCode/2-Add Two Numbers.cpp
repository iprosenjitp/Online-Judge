#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

ListNode *createListNode(int val, ListNode *next)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->val = val;
    newNode->next = next;
    return newNode;
}

void printLinkedList(ListNode *head)
{
    ListNode *currentNode = head;
    if(head == NULL) cout << "Linked List is empty\n";
    else{
        while(currentNode != NULL){
            cout << currentNode->val << " ";
            currentNode = currentNode->next;
        }
        cout << "\n";
    }
}

ll countNode(ListNode *head)
{
    ll cnt = 0;
    ListNode *currentNode = head;
    while(currentNode != NULL){
        cnt++;
        currentNode = currentNode->next;
    }
    return cnt;
}

ll toDecimal(ListNode *head)
{
    ll cntNode = countNode(head);
    ll decimalVal = 0L;
    ListNode *currentNode = head;
    for(int i = 0; i < cntNode; i++){
        decimalVal += currentNode->val * pow(10, i);
        currentNode = currentNode->next;
    }
    return decimalVal;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ll numLL1 = toDecimal(l1);
    ll numLL2 = toDecimal(l2);
    ll sum = numLL1 + numLL2;
//    cout << numLL1 << " " << numLL2 << " " << sum "\n";

    ListNode *head, *newNode, *currentNode;
    ll val;
    head = NULL;

    if(!sum){
        val = 0;
        newNode = createListNode(val, NULL);
        head = newNode;
        return head;
    }
    while(sum){
        val = sum%10;
        sum /= 10;
        newNode = createListNode(val, NULL);
        if(head == NULL) head = newNode;
        else currentNode->next = newNode;
        currentNode = newNode;
    }
    return head;
}

int main()
{
    ListNode *head1, *head2, *newNode, *currentNode;
    int val;
    head1 = head2 = NULL;
    for(int i = 0; i < 1; i++){
        cin >> val;
        newNode = createListNode(val, NULL);
        if(head1 == NULL) head1 = newNode;
        else currentNode->next = newNode;
        currentNode = newNode;
    }
    currentNode = NULL;
    for(int i = 0; i < 10; i++){
        cin >> val;
        newNode = createListNode(val, NULL);
        if(head2 == NULL) head2 = newNode;
        else currentNode->next = newNode;
        currentNode = newNode;
    }
//    printLinkedList(head1);
//    printLinkedList(head2);
    ListNode *ans = addTwoNumbers(head1, head2);
    printLinkedList(ans);
}

/**
2 4 3
5 6 4

9 9 9 9 9 9 9
9 9 9 9

0
0

9
1 9 9 9 9 9 9 9 9 9
*/
