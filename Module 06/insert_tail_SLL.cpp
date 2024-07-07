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


void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v); // create node object
    if (head == NULL)
    {// if head is NULL
        head = newNode; // update head
        return;
    }

    Node *tmp = head; // assign head in tmp
    while (tmp->next != NULL)
    {
        tmp = tmp->next; //traver and assing next node address
    }
    tmp->next = newNode; //assign temp in newNode
}

void print_list(Node *head)
{
    Node *tmp = head; // assign head in tmp
    while (tmp != NULL)
    {
        cout << tmp->val << " "; 
        tmp = tmp->next;//traver and assing next node address
    }
    cout << endl;
}

main()
{

    cout << "option-1: Insert node= " << endl;
    cout << "option-2: Print linkied list= " << endl;
    cout << "option-3: Terminate " << endl;
    Node *head = NULL;
    while (true)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            cout << "Enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        if (op == 2)
        {
            cout << "Your liked list: ";
            print_list(head);
        }
        if (op == 3)
        {
            cout << "Terminated";
            break;
        }
    }

    return 0;
}
