#include <bits/stdc++.h>
using namespace std;

 template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *reverse(LinkedListNode<int> *head)
{
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *pre = NULL;
    LinkedListNode<int> *nex = NULL;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
    }
    return pre;
}
bool isPalindrome(LinkedListNode<int> *head)
{
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;

    while (fast != NULL && fast->next != NULL)
    {

        fast = fast->next->next;

        slow = slow->next;
    }

    LinkedListNode<int> *temp1 = head;
    LinkedListNode<int> *temp2 = reverse(slow);
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}
