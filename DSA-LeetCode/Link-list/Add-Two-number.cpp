#include <bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
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
    ListNode *add(ListNode *l1, ListNode *l2)
    {
        ListNode *head1 = (l1);
        ListNode *head2 = (l2);
        int carry = 0;
        ListNode *anshead = 0;
        ListNode *anstail = 0;
        ListNode *ans = 0;
        while (head1 != 0 && head2 != 0)
        {
            int sum = (head1->val) + (head2->val) + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newnode = new ListNode(digit);
            if (anshead == 0)
            {
                anshead = newnode;
                anstail = newnode;
            }
            else
            {
                anstail->next = newnode;
                anstail = newnode;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        while (head1 != 0)
        {
            int sum = head1->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newnode = new ListNode(digit);
            anstail->next = newnode;
            anstail = newnode;
            head1 = head1->next;
        }
        while (head2 != 0)
        {
            int sum = head2->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newnode = new ListNode(digit);
            anstail->next = newnode;
            anstail = newnode;
            head2 = head2->next;
        }
        while (carry != 0)
        {
            int sum = carry;
            int digit = sum % 10;
            carry = sum / 10;
            ListNode *newnode = new ListNode(digit);
            anstail->next = newnode;
            anstail = newnode;
        }

        return anshead;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = add(l1, l2);

        return ans;
    }
};