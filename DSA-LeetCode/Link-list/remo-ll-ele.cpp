
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *curr = head;
        ListNode *pre = head;
        while (curr != NULL)
        {
            if (head->val == val)
            {
                head = head->next;
                pre = head;
                curr = head;
            }
            else if (curr->val == val)
            {
                pre->next = curr->next;
                curr = curr->next;
            }
            else
            {
                pre = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};
