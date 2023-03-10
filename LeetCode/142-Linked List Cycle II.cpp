#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head)
{
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast != nullptr && fast->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            slow = head;
            while(slow != fast){
                fast = fast->next;
                slow = slow->next;
            }
            return slow;
        }
    }
    return nullptr;
}

int main()
{

}
