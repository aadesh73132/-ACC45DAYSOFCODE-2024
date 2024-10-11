// leetcode 141. linked list cycle.

#include <iostream>
using namespace std;

class ListNode
{
    public:
    int data;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

ListNode *insertAtPosition(ListNode *head, int position, int data)
{
    ListNode *newNode = new ListNode(data);

    // If inserting at the beginning
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    ListNode *current = head;

    // Traverse the list to find the node before the
    // insertion point
    for (int i = 1; i < position - 1 && current != nullptr;
         ++i)
    {
        current = current->next;
    }

    // If the position is out of bounds
    if (current == nullptr)
    {
        cout << "Position is out of bounds." << endl;

        // Deallocate memory to prevent
        delete newNode;

        return head;
    }

    // Insert the new node at the specified position
    newNode->next = current->next;
    current->next = newNode;
    return head;
}
//linked list cycle function
bool hasCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        // it means fast after tracing the last node come in cyclic nature and once slow ,fast meets    that means cycle is present in the linked list
        if (fast == slow)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    ListNode *node = new ListNode(3);//s.e.in.insertion
    ListNode* head=node;
    insertAtPosition(head, 1, 4);
    insertAtPosition(head, 2, 5);
    insertAtPosition(head, 3, 2);

    bool ans = hasCycle(head);
    
    if(ans == 1){
        return true;
    }
    else{
        return false;
    }


    return 0;
}