
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
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *pre = NULL;
        ListNode *nex = NULL;
        while (curr != NULL)
        {
            nex = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nex;
        }
        return pre;
    }
    ListNode *removeNodes(ListNode *head)
    {
        head = reverse(head);
        int max = head->val;
        ListNode *p = head;
        while (p->next != NULL)
        {
            if (p->next->val < p->val)
            {
                p->next = p->next->next;
            }
            else
            {
                p = p->next;
            }
        }
        head = reverse(head);
        return head;
    }
};