#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);  // create node
    
    if (head == NULL)
    { // if head is null, then tail and head both are same
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode; // newnode in temp
}

void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    cout << "Option-1: Insert at tail:" << endl;
    cout << "Option-2: Prin Liked List:" << endl;
    cout << "Option-3: Terminate:" << endl;
    Node *head = NULL;
    while (true)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter your value: ";
            int v;
            cin >> v;
            insert_tail(head, v);
        }
        else if (op == 2)
        {
            cout << "Your linked list: ";
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
    }

    return 0;
}
