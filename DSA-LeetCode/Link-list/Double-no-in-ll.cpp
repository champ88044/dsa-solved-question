<<<<<<< HEAD
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
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *pre = NULL;
        ListNode *nex = NULL;
        while (curr)
        {
            nex = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nex;
        }
        return pre;
    }
    ListNode *doubleIt(ListNode *head)
    {
        head = reverse(head);
        ListNode *temp = head;
        int carry = 0;
        while (temp)

        {
            int digit = (temp->val * 2) + carry;
            temp->val = digit % 10;
            carry = digit / 10;
            if (temp->next == NULL && carry != 0)
            {
                ListNode *newnode = new ListNode(carry);
                temp->next = newnode;
                break;
            }
            temp = temp->next;
        }
        return reverse(head);
    }
};
=======
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
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *pre = NULL;
        ListNode *nex = NULL;
        while (curr)
        {
            nex = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nex;
        }
        return pre;
    }
    ListNode *doubleIt(ListNode *head)
    {
        head = reverse(head);
        ListNode *temp = head;
        int carry = 0;
        while (temp)

        {
            int digit = (temp->val * 2) + carry;
            temp->val = digit % 10;
            carry = digit / 10;
            if (temp->next == NULL && carry != 0)
            {
                ListNode *newnode = new ListNode(carry);
                temp->next = newnode;
                break;
            }
            temp = temp->next;
        }
        return reverse(head);
    }
};
>>>>>>> af3e62aa07c8dcdaabaaeeafb465568e13314ce7
